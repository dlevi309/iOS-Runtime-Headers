/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEffect:(CKFullScreenEffect *)arg1 ;
-(CKFullScreenEffect *)effect;
-(NSMutableArray *)effectViews;
-(void)addEffectView:(id)arg1 ;
-(void)setEffectViews:(NSMutableArray *)arg1 ;
-(void)setupEffectIfNeeded;
-(void)prepareForReuse;
-(void)stopAnimation;
-(void)animate;
@end

