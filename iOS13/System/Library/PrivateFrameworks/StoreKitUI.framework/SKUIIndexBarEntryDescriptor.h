/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class SKUIArtwork, NSAttributedString, UIImage;

@interface SKUIIndexBarEntryDescriptor : NSObject {

	long long _entryDescriptorType;
	SKUIArtwork* _artwork;
	NSAttributedString* _attributedString;
	UIImage* _image;
	long long _visibilityPriority;
	CGSize _size;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) long long entryDescriptorType;                    //@synthesize entryDescriptorType=_entryDescriptorType - In the implementation block
@property (nonatomic,retain) SKUIArtwork * artwork;                            //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                   //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic) long long visibilityPriority;                     //@synthesize visibilityPriority=_visibilityPriority - In the implementation block
+(id)entryDescriptorWithArtwork:(id)arg1 ;
+(id)entryDescriptorWithAttributedString:(id)arg1 ;
+(id)entryDescriptorWithImage:(id)arg1 ;
+(id)placeholderEntryDescriptorWithSize:(CGSize)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(CGSize)size;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSAttributedString *)attributedString;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(SKUIArtwork *)artwork;
-(void)setArtwork:(SKUIArtwork *)arg1 ;
-(void)setEntryDescriptorType:(long long)arg1 ;
-(long long)entryDescriptorType;
-(long long)visibilityPriority;
-(void)setVisibilityPriority:(long long)arg1 ;
@end

