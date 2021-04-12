/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWStillImageProcessorInput.h>

@class BWDeferredProcessorController, BWDeferredProcessingContainer, NSString;

@interface BWDeferredProcessorControllerInput : BWStillImageProcessorInput {

	BWDeferredProcessorController* _processorController;
	BWDeferredProcessingContainer* _container;
	NSString* _photoIdentifier;

}

@property (assign,nonatomic) BWDeferredProcessorController * processorController;              //@synthesize processorController=_processorController - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessingContainer * container;                      //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * photoIdentifier;                                     //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
-(void)dealloc;
-(BWDeferredProcessingContainer *)container;
-(NSString *)photoIdentifier;
-(void)setContainer:(id)arg1 photoIdentifier:(id)arg2 ;
-(BWDeferredProcessorController *)processorController;
-(void)setProcessorController:(BWDeferredProcessorController *)arg1 ;
@end

