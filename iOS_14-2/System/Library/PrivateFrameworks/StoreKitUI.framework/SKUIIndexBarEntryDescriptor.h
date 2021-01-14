/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(UIImage *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(void)setArtwork:(SKUIArtwork *)arg1 ;
-(CGSize)size;
-(NSAttributedString *)attributedString;
-(void)setSize:(CGSize)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIImage *)image;
-(SKUIArtwork *)artwork;
-(unsigned long long)hash;
-(UIEdgeInsets)contentEdgeInsets;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEntryDescriptorType:(long long)arg1 ;
-(long long)entryDescriptorType;
-(long long)visibilityPriority;
-(void)setVisibilityPriority:(long long)arg1 ;
@end

