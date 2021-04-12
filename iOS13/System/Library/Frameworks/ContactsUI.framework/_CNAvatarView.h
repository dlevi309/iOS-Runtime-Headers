/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIView.h>

@protocol _CNAvatarViewDelegate;
@class NSArray;

@interface _CNAvatarView : UIView {

	id<_CNAvatarViewDelegate> _delegate;
	NSArray* _likenessProviders;
	NSArray* _likenessViews;
	NSArray* _subviewsConstraints;

}

@property (nonatomic,copy) NSArray * likenessViews;                                  //@synthesize likenessViews=_likenessViews - In the implementation block
@property (nonatomic,copy) NSArray * subviewsConstraints;                            //@synthesize subviewsConstraints=_subviewsConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<_CNAvatarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * likenessProviders;                            //@synthesize likenessProviders=_likenessProviders - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id<_CNAvatarViewDelegate>)delegate;
-(void)setDelegate:(id<_CNAvatarViewDelegate>)arg1 ;
-(void)updateConstraints;
-(void)setLikenessProviders:(NSArray *)arg1 ;
-(void)setupSubviews;
-(NSArray *)likenessProviders;
-(NSArray *)likenessViews;
-(void)setLikenessViews:(NSArray *)arg1 ;
-(NSArray *)subviewsConstraints;
-(void)setSubviewsConstraints:(NSArray *)arg1 ;
@end

