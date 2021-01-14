/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFShazamMediaActionUserInterface.h>

@class NSString;

@interface WFShazamMediaActionUIKitUserInterface : WFActionUserInterface <WFShazamMediaActionUserInterface> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

