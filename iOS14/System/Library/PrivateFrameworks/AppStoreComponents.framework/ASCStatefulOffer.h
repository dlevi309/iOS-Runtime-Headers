/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/ASCOffer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ASCOffer;
@class ASCAdamID, NSDictionary, NSNumber, NSArray, NSString;

@interface ASCStatefulOffer : NSObject <ASCOffer, NSSecureCoding> {

	ASCAdamID* _id;
	NSDictionary* _titles;
	NSDictionary* _subtitles;
	long long _flags;
	NSNumber* _ageRating;
	NSArray* _metrics;
	id<ASCOffer> _defaultOffer;
	id<ASCOffer> _buyOffer;
	id<ASCOffer> _openOffer;

}

@property (nonatomic,copy,readonly) id<ASCOffer> defaultOffer;              //@synthesize defaultOffer=_defaultOffer - In the implementation block
@property (nonatomic,copy,readonly) id<ASCOffer> buyOffer;                  //@synthesize buyOffer=_buyOffer - In the implementation block
@property (nonatomic,copy,readonly) id<ASCOffer> openOffer;                 //@synthesize openOffer=_openOffer - In the implementation block
@property (nonatomic,copy,readonly) ASCAdamID * id;                         //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * titles;                  //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * subtitles;               //@synthesize subtitles=_subtitles - In the implementation block
@property (nonatomic,readonly) long long flags;                             //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSNumber * ageRating;                        //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,readonly) NSArray * metrics;                           //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(ASCAdamID *)id;
-(NSArray *)metrics;
-(id<ASCOffer>)buyOffer;
-(long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSNumber *)ageRating;
-(NSDictionary *)subtitles;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)titles;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 defaultOffer:(id)arg7 buyOffer:(id)arg8 openOffer:(id)arg9 ;
-(id<ASCOffer>)defaultOffer;
-(id<ASCOffer>)openOffer;
-(id)offerWithMetrics:(id)arg1 ;
@end
