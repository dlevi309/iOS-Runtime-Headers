/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSString, NSDictionary, NSDate;

@interface TAOutgoingRequests : NSObject {

	NSString* _key;
	NSDictionary* _additionalInformation;
	NSDate* _date;

}

@property (nonatomic,copy,readonly) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalInformation;              //@synthesize additionalInformation=_additionalInformation - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                     //@synthesize date=_date - In the implementation block
-(id)descriptionDictionary;
-(id)description;
-(NSString *)key;
-(NSDate *)date;
-(NSDictionary *)additionalInformation;
-(id)initWithRequestKey:(id)arg1 additionalInformation:(id)arg2 date:(id)arg3 ;
@end

