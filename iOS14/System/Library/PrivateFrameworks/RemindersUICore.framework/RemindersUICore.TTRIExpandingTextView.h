/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
*/

#import <RemindersUICore/RemindersUICore-Structs.h>
#import <UIKitCore/UITextView.h>

@interface RemindersUICore.TTRIExpandingTextView : UITextView {

	 isForUseInNUIContainerView;
	 lineIndexWhereClippingBegins;
	 textStorageObserver;

}

@property (assign,nonatomic) CGSize contentSize; 
@property (assign,nonatomic) CGPoint contentOffset; 
@property (readonly,nonatomic) BOOL _shouldScrollEnclosingScrollView; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
-(void)setContentSize:(CGSize)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(CGSize)contentSize;
-(unsigned long long)accessibilityTraits;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_shouldScrollEnclosingScrollView;
-(BOOL)accessibilityActivate;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

