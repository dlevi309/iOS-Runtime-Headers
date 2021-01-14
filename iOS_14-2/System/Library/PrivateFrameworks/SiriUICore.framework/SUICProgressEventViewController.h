/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)handleEvent:(unsigned long long)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)stateMachineForProgressIndicatorViewController:(id)arg1 ;
@end

