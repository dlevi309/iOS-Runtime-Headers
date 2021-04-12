/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(NSString *)customLabel;
-(id)initWithType:(long long)arg1 customLabel:(id)arg2 mapItemName:(id)arg3 addressCountryCode:(id)arg4 addressThoroughFare:(id)arg5 addressLocality:(id)arg6 ;
-(id)initWithPredictedLocationOfInterest:(id)arg1 ;
-(NSString *)mapItemName;
-(NSString *)addressCountryCode;
-(NSString *)addressThoroughfare;
-(NSString *)addressLocality;
-(RTPredictedLocationOfInterest *)rtPredictedLocationOfInterest;
@end

