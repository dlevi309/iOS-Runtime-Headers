/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXVisibilityMonitor.h>
#import <libobjc.A.dylib/SXScrollObserving.h>

@class NSString;

@interface SXVideoComponentVisibilityMonitor : SXVisibilityMonitor <SXScrollObserving>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didScroll;
-(void)scrollingWillStart;
-(void)scrollingDidStop;
@end

