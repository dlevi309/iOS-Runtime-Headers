/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKObject.h>

@class UIImage, NSHashTable;

@interface TLKImage : TLKObject {

	BOOL _isTemplate;
	BOOL _useFastPathShadow;
	UIImage* _uiImage;
	unsigned long long _cornerRoundingStyle;
	double _cornerRadius;
	NSHashTable* _completionTable;
	CGSize _size;

}

@property (nonatomic,readonly) UIImage * uiImageToRender; 
@property (nonatomic,retain) NSHashTable * completionTable;                       //@synthesize completionTable=_completionTable - In the implementation block
@property (nonatomic,retain) UIImage * uiImage;                                   //@synthesize uiImage=_uiImage - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL isTemplate;                                     //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) unsigned long long cornerRoundingStyle;              //@synthesize cornerRoundingStyle=_cornerRoundingStyle - In the implementation block
@property (assign,nonatomic) BOOL useFastPathShadow;                              //@synthesize useFastPathShadow=_useFastPathShadow - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                 //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(void)setUiImage:(UIImage *)arg1 ;
-(unsigned long long)cornerRoundingStyle;
-(void)setCornerRoundingStyle:(unsigned long long)arg1 ;
-(CGSize)size;
-(void)setCompletionTable:(NSHashTable *)arg1 ;
-(NSHashTable *)completionTable;
-(void)setUseFastPathShadow:(BOOL)arg1 ;
-(BOOL)isTemplate;
-(void)setSize:(CGSize)arg1 ;
-(double)cornerRadius;
-(UIImage *)uiImage;
-(void)setCornerRadius:(double)arg1 ;
-(void)didLoadImageWithCompletion:(/*^block*/id)arg1 ;
-(UIImage *)uiImageToRender;
-(BOOL)useFastPathShadow;
-(void)setIsTemplate:(BOOL)arg1 ;
@end

