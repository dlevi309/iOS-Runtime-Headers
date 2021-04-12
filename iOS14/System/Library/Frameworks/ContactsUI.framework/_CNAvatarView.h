/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setupSubviews;
-(void)setLikenessProviders:(NSArray *)arg1 ;
-(NSArray *)likenessProviders;
-(NSArray *)likenessViews;
-(void)setLikenessViews:(NSArray *)arg1 ;
-(NSArray *)subviewsConstraints;
-(void)setSubviewsConstraints:(NSArray *)arg1 ;
-(void)updateConstraints;
@end

