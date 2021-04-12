/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBBacklightControllerObserver.h>

@class SLGLog, SBBacklightController, NSString;

@interface SBBacklightStudyLogger : NSObject <SBBacklightControllerObserver> {

	SLGLog* _logger;
	SBBacklightController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)backlightController:(id)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3 ;
-(id)initWithController:(id)arg1 ;
-(void)dealloc;
@end

