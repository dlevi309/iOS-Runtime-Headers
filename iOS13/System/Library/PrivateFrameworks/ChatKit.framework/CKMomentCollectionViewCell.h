/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UICollectionViewCell.h>

@class CKFullScreenEffect, NSMutableArray;

@interface CKMomentCollectionViewCell : UICollectionViewCell {

	CKFullScreenEffect* _effect;
	NSMutableArray* _effectViews;

}

@property (nonatomic,retain) CKFullScreenEffect * effect;               //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) NSMutableArray * effectViews;              //@synthesize effectViews=_effectViews - In the implementation block
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(void)setEffect:(CKFullScreenEffect *)arg1 ;
-(void)animate;
-(void)stopAnimation;
-(CKFullScreenEffect *)effect;
-(NSMutableArray *)effectViews;
-(void)setEffectViews:(NSMutableArray *)arg1 ;
-(void)addEffectView:(id)arg1 ;
-(void)setupEffectIfNeeded;
@end

