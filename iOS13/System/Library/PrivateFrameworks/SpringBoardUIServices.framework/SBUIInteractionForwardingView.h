/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class NSHashTable, NSSet;

@interface SBUIInteractionForwardingView : UIView {

	NSHashTable* _ignoreAlphaSubviewsTable;

}

@property (nonatomic,copy) NSSet * ignoreAlphaSubviews; 
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSSet *)ignoreAlphaSubviews;
-(void)setIgnoreAlphaSubviews:(NSSet *)arg1 ;
-(void)addIgnoreAlphaSubview:(id)arg1 ;
-(void)removeIgnoreAlphaSubview:(id)arg1 ;
@end

