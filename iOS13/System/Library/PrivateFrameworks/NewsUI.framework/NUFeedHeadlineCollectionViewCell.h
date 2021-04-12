/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NUViewNode, NSString;

@interface NUFeedHeadlineCollectionViewCell : UICollectionViewCell {

	NUViewNode* _thumbnailImageViewNode;
	NUViewNode* _publisherLogoImageViewNode;
	NUViewNode* _titleLabelNode;
	NUViewNode* _dateLabelNode;
	NSString* _headlineIdentifier;

}

@property (nonatomic,readonly) NUViewNode * thumbnailImageViewNode;                  //@synthesize thumbnailImageViewNode=_thumbnailImageViewNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * publisherLogoImageViewNode;              //@synthesize publisherLogoImageViewNode=_publisherLogoImageViewNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * titleLabelNode;                          //@synthesize titleLabelNode=_titleLabelNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * dateLabelNode;                           //@synthesize dateLabelNode=_dateLabelNode - In the implementation block
@property (nonatomic,copy) NSString * headlineIdentifier;                            //@synthesize headlineIdentifier=_headlineIdentifier - In the implementation block
+(id)titleLabelFont;
+(id)dateLabelFont;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NUViewNode *)publisherLogoImageViewNode;
-(NUViewNode *)titleLabelNode;
-(NUViewNode *)dateLabelNode;
-(NUViewNode *)thumbnailImageViewNode;
-(NSString *)headlineIdentifier;
-(void)setHeadlineIdentifier:(NSString *)arg1 ;
@end

