/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKBaseSound.h>
#import <libobjc.A.dylib/STKSound.h>

@class NSString;

@interface STKSystemSound : STKBaseSound <STKSound> {

	unsigned _systemSoundID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reallyPlaySound;
-(void)_reallyStopSound;
-(id)initForSystemSoundID:(unsigned)arg1 duration:(double)arg2 ;
@end

