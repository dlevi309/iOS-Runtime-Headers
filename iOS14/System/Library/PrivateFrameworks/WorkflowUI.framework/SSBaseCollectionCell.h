/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@interface SSBaseCollectionCell : UICollectionViewCell {

	BOOL _didCompleteSetup;

}

@property (assign,nonatomic) BOOL didCompleteSetup;              //@synthesize didCompleteSetup=_didCompleteSetup - In the implementation block
+(id)identifier;
+(id)cellForCollectionView:(id)arg1 indexPath:(id)arg2 ;
-(void)configureCell;
-(void)setDidCompleteSetup:(BOOL)arg1 ;
-(BOOL)didCompleteSetup;
@end

