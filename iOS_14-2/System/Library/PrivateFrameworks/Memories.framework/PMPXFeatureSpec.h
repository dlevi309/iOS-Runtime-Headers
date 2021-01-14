/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class NSString;

@interface PMPXFeatureSpec : PXFeatureSpec {

	NSString* _fontName;
	CGSize _size;

}

@property (nonatomic,retain) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) CGSize size;                      //@synthesize size=_size - In the implementation block
-(void)setFontName:(NSString *)arg1 ;
-(NSString *)fontName;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)viewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(id)specForFont:(id)arg1 size:(CGSize)arg2 ;
-(id)verticalExportSpecForFont:(id)arg1 size:(CGSize)arg2 ;
@end

