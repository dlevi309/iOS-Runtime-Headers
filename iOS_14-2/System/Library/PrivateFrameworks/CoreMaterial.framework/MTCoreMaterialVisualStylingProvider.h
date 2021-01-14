/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)canGenerateVisualStyleSetFromRecipe:(id)arg1 ;
+(id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)coreMaterialVisualStylingProviderForRecipe:(id)arg1 andCategory:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_setVisualStyleSet:(id)arg1 ;
-(NSString *)visualStyleSetName;
-(id)_observers;
-(BOOL)updateVisualStyleSetGeneratedFromRecipe:(id)arg1 ;
-(id)visualStylingForStyle:(id)arg1 ;
-(id)description;
-(void)setObservers:(NSPointerArray *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_visualStyleSet;
-(BOOL)updateVisualStyleSetFromRecipe:(id)arg1 andCategory:(id)arg2 ;
@end

