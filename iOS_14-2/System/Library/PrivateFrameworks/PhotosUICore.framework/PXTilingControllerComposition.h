/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXTilingControllerCompositionInput, PXTilingControllerCompositionOutput, PXTilingScrollController, PXTilingControllerCompositionObserver;
@class NSSet;

@interface PXTilingControllerComposition : NSObject {

	BOOL _active;
	NSSet* _tilingControllers;
	id<PXTilingControllerCompositionInput> _input;
	id<PXTilingControllerCompositionOutput> _output;
	id<PXTilingScrollController> __scrollController;
	id<PXTilingControllerCompositionObserver> _observer;

}

@property (assign,setter=_setScrollController:,nonatomic,__weak) id<PXTilingScrollController> _scrollController;              //@synthesize _scrollController=__scrollController - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerCompositionObserver> observer;                                       //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,copy,readonly) NSSet * tilingControllers;                                                                //@synthesize tilingControllers=_tilingControllers - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerCompositionInput> input;                                             //@synthesize input=_input - In the implementation block
@property (assign,nonatomic,__weak) id<PXTilingControllerCompositionOutput> output;                                           //@synthesize output=_output - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(void)setObserver:(id<PXTilingControllerCompositionObserver>)arg1 ;
-(id<PXTilingControllerCompositionObserver>)observer;
-(id<PXTilingControllerCompositionInput>)input;
-(id<PXTilingControllerCompositionOutput>)output;
-(BOOL)isActive;
-(void)setInput:(id<PXTilingControllerCompositionInput>)arg1 ;
-(void)invalidateComposition;
-(void)setOutput:(id<PXTilingControllerCompositionOutput>)arg1 ;
-(void)updateComposition;
-(void)invalidateCompositionWithContext:(id)arg1 ;
-(void)_setScrollController:(id)arg1 ;
-(NSSet *)tilingControllers;
-(id<PXTilingScrollController>)_scrollController;
@end

