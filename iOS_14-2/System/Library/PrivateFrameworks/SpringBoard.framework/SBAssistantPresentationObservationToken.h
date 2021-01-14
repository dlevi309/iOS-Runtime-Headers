/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBAssistantController *)assistantController;
-(void)assistantDidDisappear:(id)arg1 ;
-(void)assistantDidAppear:(id)arg1 ;
-(long long)state;
-(void)assistantWillAppear:(id)arg1 ;
-(void)dealloc;
-(id)initWithAssistantController:(id)arg1 ;
-(void)assistantWillDisappear:(id)arg1 ;
@end

