/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SUICProgressIndicatorViewController.h>
#import <libobjc.A.dylib/SUICProgressIndicatorViewControllerDataSource.h>

@class SUICProgressStateMachine, NSProgress, NSString;

@interface SUICProgressEventViewController : SUICProgressIndicatorViewController <SUICProgressIndicatorViewControllerDataSource> {

	SUICProgressStateMachine* _stateMachine;
	NSProgress* _progress;

}

@property (nonatomic,retain) NSProgress * progress;                 //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)handleEvent:(unsigned long long)arg1 ;
-(id)stateMachineForProgressIndicatorViewController:(id)arg1 ;
@end

