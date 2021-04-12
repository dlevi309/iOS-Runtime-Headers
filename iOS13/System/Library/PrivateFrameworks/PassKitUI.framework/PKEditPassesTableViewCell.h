/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class PKPass;

@interface PKEditPassesTableViewCell : UITableViewCell {

	BOOL _showImage;
	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;               //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) BOOL showImage;              //@synthesize showImage=_showImage - In the implementation block
+(double)height;
+(UIEdgeInsets)separatorInset;
+(CGSize)imageSizeNeeded;
+(BOOL)needsFullPassImage;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(void)setImage:(id)arg1 forPass:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 showImage:(BOOL)arg2 ;
-(BOOL)showImage;
-(void)setShowImage:(BOOL)arg1 ;
@end

