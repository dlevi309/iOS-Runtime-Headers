/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)key;
-(NSDate *)date;
-(id)descriptionDictionary;
-(id)initWithRequestKey:(id)arg1 additionalInformation:(id)arg2 date:(id)arg3 ;
-(NSDictionary *)additionalInformation;
@end

