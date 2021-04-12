/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
*/


@interface FTCServiceMonitor : NSObject {

	long long _availability;
	long long _type;
	int _token;

}

@property (nonatomic,readonly) long long serviceType; 
-(void)dealloc;
-(long long)serviceType;
-(long long)serviceAvailability;
-(void)updateAvailability;
-(void)_updateAvailability;
-(void)_postAvailability:(long long)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
@end

