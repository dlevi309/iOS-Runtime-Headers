/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class TPKContentView;

@interface CKTipKitCollectionViewCell : UICollectionViewCell {

	TPKContentView* _tipKitContentView;

}

@property (nonatomic,retain) TPKContentView * tipKitContentView;              //@synthesize tipKitContentView=_tipKitContentView - In the implementation block
+(id)reuseIdentifier;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setTipKitContentView:(TPKContentView *)arg1 ;
-(TPKContentView *)tipKitContentView;
-(void)dealloc;
@end

