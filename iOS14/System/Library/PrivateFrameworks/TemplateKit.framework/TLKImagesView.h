/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateWithImages:(id)arg1 ;
-(BOOL)isPaddingDisabled;
-(void)updateForPaddingDisabled:(BOOL)arg1 ;
-(void)setPaddingDisabled:(BOOL)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(NSMutableArray *)imageViews;
-(NSArray *)images;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(BOOL)usesDefaultLayoutMargins;
@end

