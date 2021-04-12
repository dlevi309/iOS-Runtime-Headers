/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnostics.framework/iOSDiagnostics
*/

#import <libobjc.A.dylib/DKBrightnessResponder.h>
#import <libobjc.A.dylib/DKVolumeHUDResponder.h>

@class NSString;

@interface DADiagnosticResponder : NSObject <DKBrightnessResponder, DKVolumeHUDResponder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)enableVolumeHUD:(BOOL)arg1 ;
@end

