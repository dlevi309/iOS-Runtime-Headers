/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/ASCOffer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ASCAdamID, NSDictionary, NSNumber, NSArray, NSURL, NSString;

@interface ASCURLOffer : NSObject <ASCOffer, NSSecureCoding> {

	BOOL _isSensitive;
	ASCAdamID* _id;
	NSDictionary* _titles;
	NSDictionary* _subtitles;
	long long _flags;
	NSNumber* _ageRating;
	NSArray* _metrics;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isSensitive;                           //@synthesize isSensitive=_isSensitive - In the implementation block
@property (nonatomic,copy,readonly) ASCAdamID * id;                        //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * titles;                 //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * subtitles;              //@synthesize subtitles=_subtitles - In the implementation block
@property (nonatomic,readonly) long long flags;                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSNumber * ageRating;                       //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,readonly) NSArray * metrics;                          //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(ASCAdamID *)id;
-(BOOL)isSensitive;
-(NSArray *)metrics;
-(long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)description;
-(NSNumber *)ageRating;
-(NSDictionary *)subtitles;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)titles;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)offerWithMetrics:(id)arg1 ;
-(id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 url:(id)arg7 isSensitive:(BOOL)arg8 ;
@end

