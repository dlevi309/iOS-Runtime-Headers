/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/AVTDiscardableContent.h>

@class UIView, AVTAttributeValueView, NSString;

@interface AVTAttributeCollectionViewCell : UICollectionViewCell <AVTDiscardableContent> {

	/*^block*/id discardableContentHandler;
	UIView* _attributeView;

}

@property (nonatomic,retain) UIView * attributeView;                           //@synthesize attributeView=_attributeView - In the implementation block
@property (nonatomic,readonly) AVTAttributeValueView * valueView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id discardableContentHandler; 
+(id)cellIdentifier;
-(void)prepareForReuse;
-(AVTAttributeValueView *)valueView;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(void)setAttributeView:(UIView *)arg1 ;
-(UIView *)attributeView;
@end

