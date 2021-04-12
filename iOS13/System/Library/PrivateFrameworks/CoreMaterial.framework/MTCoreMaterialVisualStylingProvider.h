/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/


@protocol MTVisualStyleSetProviding;
@class NSPointerArray, NSString;

@interface MTCoreMaterialVisualStylingProvider : NSObject {

	id<MTVisualStyleSetProviding> _visualStyleSet;
	NSPointerArray* _observers;

}

@property (nonatomic,copy,readonly) NSString * visualStyleSetName; 
@property (setter=_setVisualStyleSet:,getter=_visualStyleSet,nonatomic,retain) id<MTVisualStyleSetProviding> visualStyleSet;              //@synthesize visualStyleSet=_visualStyleSet - In the implementation block
@property (getter=_observers,nonatomic,retain) NSPointerArray * observers;                                                                //@synthesize observers=_observers - In the implementation block
+(id)coreMaterialVisualStylingProviderForRecipe:(id)arg1 andCategory:(id)arg2 ;
+(id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2 ;
+(BOOL)canGenerateVisualStyleSetFromRecipe:(id)arg1 ;
-(id)description;
-(id)_observers;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSPointerArray *)arg1 ;
-(void)_setVisualStyleSet:(id)arg1 ;
-(id)_visualStyleSet;
-(NSString *)visualStyleSetName;
-(id)visualStylingForStyle:(id)arg1 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)updateVisualStyleSetFromRecipe:(id)arg1 andCategory:(id)arg2 ;
-(void)updateVisualStyleSetGeneratedFromRecipe:(id)arg1 ;
@end

