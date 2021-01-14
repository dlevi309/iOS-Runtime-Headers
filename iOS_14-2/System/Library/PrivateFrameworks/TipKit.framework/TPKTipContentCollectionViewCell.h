/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
*/

#import <TipKit/TipKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class TPKContent, TPKContentView, NSString, UIView;

@interface TPKTipContentCollectionViewCell : UICollectionViewCell {

	TPKContent* _content;
	TPKContentView* _tipContentView;
	NSString* _systemLayoutSizeCacheKey;
	UIView* _containerView;
	CGSize _systemLayoutSizeCacheSize;

}

@property (assign,nonatomic) CGSize systemLayoutSizeCacheSize;                 //@synthesize systemLayoutSizeCacheSize=_systemLayoutSizeCacheSize - In the implementation block
@property (nonatomic,retain) NSString * systemLayoutSizeCacheKey;              //@synthesize systemLayoutSizeCacheKey=_systemLayoutSizeCacheKey - In the implementation block
@property (nonatomic,retain) UIView * containerView;                           //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) TPKContent * content;                             //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) TPKContentView * tipContentView;                  //@synthesize tipContentView=_tipContentView - In the implementation block
+(id)reuseIdentifier;
-(TPKContentView *)tipContentView;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)setContainerView:(UIView *)arg1 ;
-(TPKContent *)content;
-(void)setTipContentView:(TPKContentView *)arg1 ;
-(void)setContent:(TPKContent *)arg1 ;
-(void)prepareForReuse;
-(UIView *)containerView;
-(void)setSystemLayoutSizeCacheKey:(NSString *)arg1 ;
-(void)setSystemLayoutSizeCacheSize:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeCacheSize;
-(NSString *)systemLayoutSizeCacheKey;
-(void)setContent:(id)arg1 contentController:(id)arg2 ;
@end

