/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKSettingsUIVisibilityProvider.h>

@class NSString;

@interface CRKMockSettingsUIVisibilityProvider : NSObject <CRKSettingsUIVisibilityProvider> {

	BOOL _settingsUIVisible;

}

@property (assign) BOOL settingsUIVisible;                          //@synthesize settingsUIVisible=_settingsUIVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectToDaemon;
-(BOOL)settingsUIVisible;
-(void)setSettingsUIVisible:(BOOL)arg1 ;
@end

