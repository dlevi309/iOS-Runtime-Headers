/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBPresentationObservationToken.h>
#import <libobjc.A.dylib/SBAssistantObserver.h>

@class SBAssistantController, NSString;

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver> {

	SBAssistantController* _assistantController;

}

@property (nonatomic,readonly) SBAssistantController * assistantController;              //@synthesize assistantController=_assistantController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)state;
-(id)initWithAssistantController:(id)arg1 ;
-(void)assistantWillAppear:(id)arg1 ;
-(void)assistantDidAppear:(id)arg1 ;
-(SBAssistantController *)assistantController;
-(void)assistantWillDisappear:(id)arg1 ;
-(void)assistantDidDisappear:(id)arg1 ;
@end

