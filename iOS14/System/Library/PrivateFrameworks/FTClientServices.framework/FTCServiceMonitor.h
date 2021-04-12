/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
*/


@interface FTCServiceMonitor : NSObject {

	long long _availability;
	long long _type;
	int _token;

}

@property (nonatomic,readonly) long long serviceType; 
-(void)updateAvailability;
-(void)_updateAvailability;
-(id)initWithServiceType:(long long)arg1 ;
-(long long)serviceAvailability;
-(long long)serviceType;
-(void)_postAvailability:(long long)arg1 ;
-(void)dealloc;
@end

