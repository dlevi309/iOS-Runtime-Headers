/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl
*/

#import <BrightnessControl/BrightnessControl-Structs.h>
#import <BrightnessControl/BCBrtControl.h>

@interface BCAppleBacklightBrtControl : BCBrtControl {

	unsigned _backlightService;
	double _minUser;
	double _maxUser;
	double _minMilliAmps;
	double _maxMilliAmps;
	BOOL _isDFR;
	BOOL _isDCP;
	BOOL _override;
	SCD_Struct_BC0* _terminationCallback;
	IONotificationPortRef _terminationNotifPort;
	unsigned _terminationIterator;

}

@property (readonly) unsigned long long registryID; 
+(id)newMonitorWithHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
+(id)copyAvailableControls;
-(id)ID;
-(id)init;
-(id)initWithService:(unsigned)arg1 ;
-(id)copyProperty:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)registryID;
-(void)dealloc;
-(id)copyModuleIdentifier;
-(BOOL)setNits:(double)arg1 error:(id*)arg2 ;
-(double)getNitsWithError:(id*)arg1 ;
-(BOOL)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)setDisplayService:(unsigned)arg1 ;
@end

