/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWStillImageProcessorInput.h>

@class BWDeferredProcessorController, BWDeferredProcessingContainer, NSString;

@interface BWDeferredProcessorControllerInput : BWStillImageProcessorInput {

	BWDeferredProcessorController* _processorController;
	BWDeferredProcessingContainer* _container;
	NSString* _photoIdentifier;

}

@property (assign,nonatomic) BWDeferredProcessorController * processorController;              //@synthesize processorController=_processorController - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessingContainer * container;                      //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * photoIdentifier;                                     //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
-(NSString *)photoIdentifier;
-(BWDeferredProcessorController *)processorController;
-(void)setProcessorController:(BWDeferredProcessorController *)arg1 ;
-(void)setContainer:(id)arg1 photoIdentifier:(id)arg2 ;
-(BWDeferredProcessingContainer *)container;
-(void)dealloc;
@end

