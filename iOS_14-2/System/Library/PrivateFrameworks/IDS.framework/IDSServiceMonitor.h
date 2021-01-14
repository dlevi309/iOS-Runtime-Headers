/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSString;

@interface IDSServiceMonitor : NSObject {

	long long _availability;
	NSString* _service;
	int _token;

}

@property (nonatomic,readonly) NSString * service; 
-(void)updateAvailability;
-(id)initWithService:(id)arg1 ;
-(void)_updateAvailability;
-(long long)serviceAvailability;
-(void)_postAvailability:(long long)arg1 ;
-(NSString *)service;
-(void)dealloc;
@end

