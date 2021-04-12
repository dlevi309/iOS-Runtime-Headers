/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSString, RTPredictedLocationOfInterest;

@interface EKPredictedLocationOfInterest : NSObject {

	long long _type;
	NSString* _customLabel;
	NSString* _mapItemName;
	NSString* _addressCountryCode;
	NSString* _addressThoroughfare;
	NSString* _addressLocality;
	RTPredictedLocationOfInterest* _rtPredictedLocationOfInterest;

}

@property (nonatomic,readonly) RTPredictedLocationOfInterest * rtPredictedLocationOfInterest;              //@synthesize rtPredictedLocationOfInterest=_rtPredictedLocationOfInterest - In the implementation block
@property (nonatomic,readonly) long long type;                                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * customLabel;                                                //@synthesize customLabel=_customLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * mapItemName;                                                //@synthesize mapItemName=_mapItemName - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressCountryCode;                                         //@synthesize addressCountryCode=_addressCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressThoroughfare;                                        //@synthesize addressThoroughfare=_addressThoroughfare - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressLocality;                                            //@synthesize addressLocality=_addressLocality - In the implementation block
-(NSString *)mapItemName;
-(id)initWithType:(long long)arg1 customLabel:(id)arg2 mapItemName:(id)arg3 addressCountryCode:(id)arg4 addressThoroughFare:(id)arg5 addressLocality:(id)arg6 ;
-(id)initWithPredictedLocationOfInterest:(id)arg1 ;
-(NSString *)addressCountryCode;
-(NSString *)addressThoroughfare;
-(NSString *)addressLocality;
-(RTPredictedLocationOfInterest *)rtPredictedLocationOfInterest;
-(NSString *)customLabel;
-(long long)type;
@end

