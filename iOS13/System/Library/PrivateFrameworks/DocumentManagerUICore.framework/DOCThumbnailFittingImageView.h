/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <DocumentManagerUICore/DOCBorderedFittingImageView.h>

@class FPItem, NSURL;

@interface DOCThumbnailFittingImageView : DOCBorderedFittingImageView {

	FPItem* _item;
	NSURL* _url;
	long long _generatorGeneration;

}

@property (nonatomic,readonly) FPItem * item;                            //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long generatorGeneration;              //@synthesize generatorGeneration=_generatorGeneration - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(FPItem *)item;
-(NSURL *)url;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(void)updateThumbnail;
-(void)_commonInitWithSize:(CGSize)arg1 ;
-(void)updateThumbnailForItem:(id)arg1 ;
-(void)updateThumbnailForURL:(id)arg1 ;
-(long long)generatorGeneration;
-(void)setGeneratorGeneration:(long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 item:(id)arg2 ;
-(id)initWithSize:(CGSize)arg1 url:(id)arg2 ;
@end

