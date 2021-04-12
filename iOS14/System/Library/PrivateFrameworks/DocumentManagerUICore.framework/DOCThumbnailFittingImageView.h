/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FPItem *)item;
-(NSURL *)url;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateThumbnail;
-(void)_commonInitWithSize:(CGSize)arg1 ;
-(void)updateThumbnailForItem:(id)arg1 ;
-(void)updateThumbnailForURL:(id)arg1 ;
-(long long)generatorGeneration;
-(void)setGeneratorGeneration:(long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 item:(id)arg2 ;
-(id)initWithSize:(CGSize)arg1 url:(id)arg2 ;
@end

