/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFRecordAudioActionUserInterface.h>

@class NSString;

@interface WFRecordAudioActionUIKitUserInterface : WFActionUserInterface <WFRecordAudioActionUserInterface> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithOutputFormat:(long long)arg1 startImmediately:(BOOL)arg2 recordingDuration:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)finishWithFileRepresentation:(id)arg1 error:(id)arg2 ;
@end

