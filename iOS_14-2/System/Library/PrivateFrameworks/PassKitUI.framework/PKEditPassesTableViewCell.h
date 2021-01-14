/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(UIEdgeInsets)separatorInset;
+(double)height;
+(BOOL)needsFullPassImage;
+(CGSize)imageSizeNeeded;
-(void)setPass:(PKPass *)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPass *)pass;
-(id)initWithReuseIdentifier:(id)arg1 showImage:(BOOL)arg2 ;
-(BOOL)showImage;
-(void)setShowImage:(BOOL)arg1 ;
-(void)setImage:(id)arg1 forPass:(id)arg2 ;
@end

