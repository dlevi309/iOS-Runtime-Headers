/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKBaseSound.h>
#import <libobjc.A.dylib/STKSound.h>

@class TLAlert, NSString;

@interface STKToneAlertSound : STKBaseSound <STKSound> {

	TLAlert* _alert;
	long long _alertType;
	BOOL _finishedSoundNormally;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithType:(long long)arg1 duration:(double)arg2 ;
-(void)_reallyPlaySound;
-(void)_reallyStopSound;
@end

