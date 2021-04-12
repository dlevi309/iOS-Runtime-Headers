/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setAnimations:(NSHashTable *)arg1 ;
-(void)setPersistentAnimations:(NSArray *)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)persistentAnimations;
@end

