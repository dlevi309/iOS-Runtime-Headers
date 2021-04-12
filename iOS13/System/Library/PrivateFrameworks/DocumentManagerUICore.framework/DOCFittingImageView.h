/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/DOCThumbnailListener.h>

@protocol DOCFittingImageViewDelegate, DOCThumbnail;
@class NSLayoutConstraint, NSString;

@interface DOCFittingImageView : UIImageView <DOCThumbnailListener> {

	id<DOCFittingImageViewDelegate> _delegate;
	id<DOCThumbnail> _thumbnail;
	NSLayoutConstraint* _aspectRatioConstraint;
	CGSize _fittingSize;

}

@property (nonatomic,retain) NSLayoutConstraint * aspectRatioConstraint;                   //@synthesize aspectRatioConstraint=_aspectRatioConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<DOCFittingImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<DOCThumbnail> thumbnail;                                   //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) CGSize fittingSize;                                           //@synthesize fittingSize=_fittingSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<DOCFittingImageViewDelegate>)delegate;
-(void)setDelegate:(id<DOCFittingImageViewDelegate>)arg1 ;
-(void)setImage:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)fittingSize;
-(void)initCommon;
-(id<DOCThumbnail>)thumbnail;
-(void)setThumbnail:(id<DOCThumbnail>)arg1 ;
-(void)setFittingSize:(CGSize)arg1 ;
-(void)thumbnailLoaded:(id)arg1 ;
-(NSLayoutConstraint *)aspectRatioConstraint;
-(void)setAspectRatioConstraint:(NSLayoutConstraint *)arg1 ;
@end

