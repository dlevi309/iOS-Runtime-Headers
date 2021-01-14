/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) id discardableContentHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellIdentifier;
-(UIView *)attributeView;
-(AVTAttributeValueView *)valueView;
-(void)prepareForReuse;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(void)setAttributeView:(UIView *)arg1 ;
@end

