/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/XBApplicationProviding.h>

@class NSString;

@interface XBDefaultApplicationProvider : NSObject <XBApplicationProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allSplashBoardApplications;
-(id)allInstalledApplications;
-(id)splashBoardSystemApplications;
-(id)_allApplicationsFilteredBySystem:(BOOL)arg1 bySplashBoard:(BOOL)arg2 ;
@end

