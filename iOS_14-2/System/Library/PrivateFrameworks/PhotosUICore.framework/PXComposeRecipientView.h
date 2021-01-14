/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXComposeRecipientViewDelegate;
@class UIFont, NSString, UIButton, NSArray;

@interface PXComposeRecipientView : UIView {

	SCD_Struct_PX45 _delegateRespondsTo;
	BOOL _separatorHidden;
	id<PXComposeRecipientViewDelegate> _delegate;
	UIFont* _baseFont;
	NSString* _text;
	NSString* _label;
	UIButton* _addButton;
	long long _maxRecipients;
	NSArray* _recipients;

}

@property (assign,nonatomic,__weak) id<PXComposeRecipientViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIFont * baseFont;                                             //@synthesize baseFont=_baseFont - In the implementation block
@property (nonatomic,copy) NSString * text;                                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIButton * addButton;                                          //@synthesize addButton=_addButton - In the implementation block
@property (assign,nonatomic) long long maxRecipients;                                         //@synthesize maxRecipients=_maxRecipients - In the implementation block
@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden;                   //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients;                                     //@synthesize recipients=_recipients - In the implementation block
-(NSArray *)recipients;
-(void)addRecipient:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(id)init;
-(UIFont *)baseFont;
-(id<PXComposeRecipientViewDelegate>)delegate;
-(void)setText:(NSString *)arg1 ;
-(void)setDelegate:(id<PXComposeRecipientViewDelegate>)arg1 ;
-(UIButton *)addButton;
-(NSString *)text;
-(void)addRecipients:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setMaxRecipients:(long long)arg1 ;
-(long long)maxRecipients;
-(void)removeRecipients:(id)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(NSString *)label;
-(BOOL)isSeparatorHidden;
@end

