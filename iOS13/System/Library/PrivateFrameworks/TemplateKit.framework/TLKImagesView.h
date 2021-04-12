/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class NSArray, NSMutableArray, NUIContainerStackView, NSString;

@interface TLKImagesView : TLKView <NUIContainerViewDelegate> {

	BOOL _paddingDisabled;
	NSArray* _images;
	NSMutableArray* _imageViews;

}

@property (nonatomic,retain) NSMutableArray * imageViews;                                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * contentView; 
@property (nonatomic,retain) NSArray * images;                                           //@synthesize images=_images - In the implementation block
@property (assign,getter=isPaddingDisabled,nonatomic) BOOL paddingDisabled;              //@synthesize paddingDisabled=_paddingDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)images;
-(void)setImages:(NSArray *)arg1 ;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(BOOL)usesDefaultInsets;
-(void)updateWithImages:(id)arg1 ;
-(BOOL)isPaddingDisabled;
-(void)updateForPaddingDisabled:(BOOL)arg1 ;
-(void)setPaddingDisabled:(BOOL)arg1 ;
@end

