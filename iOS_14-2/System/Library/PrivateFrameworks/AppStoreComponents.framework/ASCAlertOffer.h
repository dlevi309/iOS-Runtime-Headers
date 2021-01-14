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

@interface ASCAlertOffer : NSObject <ASCOffer, NSSecureCoding> {

	ASCAdamID* _id;
	NSDictionary* _titles;
	NSDictionary* _subtitles;
	long long _flags;
	NSNumber* _ageRating;
	NSArray* _metrics;
	NSString* _alertTitle;
	NSString* _alertMessage;
	id<ASCOffer> _alertButtonOffer;
	NSString* _alertButtonTitle;

}

@property (nonatomic,copy,readonly) NSString * alertTitle;                      //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertMessage;                    //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,copy,readonly) id<ASCOffer> alertButtonOffer;              //@synthesize alertButtonOffer=_alertButtonOffer - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertButtonTitle;                //@synthesize alertButtonTitle=_alertButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) ASCAdamID * id;                             //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * titles;                      //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * subtitles;                   //@synthesize subtitles=_subtitles - In the implementation block
@property (nonatomic,readonly) long long flags;                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSNumber * ageRating;                            //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,readonly) NSArray * metrics;                               //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(ASCAdamID *)id;
-(NSArray *)metrics;
-(long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSNumber *)ageRating;
-(NSDictionary *)subtitles;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)titles;
-(NSString *)alertTitle;
-(NSString *)alertMessage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)offerWithMetrics:(id)arg1 ;
-(id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 alertTitle:(id)arg7 alertMessage:(id)arg8 alertButtonOffer:(id)arg9 alertButtonTitle:(id)arg10 ;
-(id<ASCOffer>)alertButtonOffer;
-(NSString *)alertButtonTitle;
@end

