/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIView.h>

@class NSHashTable, NSArray;

@interface _UIStatusBarPersistentAnimationView : UIView {

	NSHashTable* _animations;

}

@property (nonatomic,retain) NSHashTable * animations;                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,copy) NSArray * persistentAnimations; 
-(NSHashTable *)animations;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setAnimations:(NSHashTable *)arg1 ;
-(NSArray *)persistentAnimations;
-(void)setPersistentAnimations:(NSArray *)arg1 ;
@end

