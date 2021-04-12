/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <SilexVideo/SVVisibilityMonitor.h>
#import <libobjc.A.dylib/SXScrollObserving.h>

@class NSString;

@interface SXVideoComponentVisibilityMonitor : SVVisibilityMonitor <SXScrollObserving>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didScroll;
-(void)scrollingWillStart;
-(void)scrollingDidStop;
@end

