/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {

	NSString* m_name;
	SCD_Struct_UI86 m_x;
	SCD_Struct_UI86 m_y;
	SCD_Struct_UI86 m_w;
	SCD_Struct_UI86 m_h;
	SCD_Struct_UI86 m_paddingTop;
	SCD_Struct_UI86 m_paddingLeft;
	SCD_Struct_UI86 m_paddingBottom;
	SCD_Struct_UI86 m_paddingRight;
	BOOL m_explicitlySpecified;
	BOOL m_isTemplate;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,setter=setX:,nonatomic) SCD_Struct_UI86 x; 
@property (assign,setter=setY:,nonatomic) SCD_Struct_UI86 y; 
@property (assign,setter=setW:,nonatomic) SCD_Struct_UI86 w; 
@property (assign,setter=setH:,nonatomic) SCD_Struct_UI86 h; 
@property (assign,setter=setPaddingTop:,nonatomic) SCD_Struct_UI86 paddingTop; 
@property (assign,setter=setPaddingLeft:,nonatomic) SCD_Struct_UI86 paddingLeft; 
@property (assign,setter=setPaddingBottom:,nonatomic) SCD_Struct_UI86 paddingBottom; 
@property (assign,setter=setPaddingRight:,nonatomic) SCD_Struct_UI86 paddingRight; 
@property (assign,nonatomic) BOOL explicitlySpecified; 
@property (assign,nonatomic) BOOL isTemplate; 
+(id)geometry;
+(id)geometryWithRect:(CGRect)arg1 ;
+(id)geometryWithOriginValue:(SCD_Struct_UI86)arg1 sizeValue:(SCD_Struct_UI86)arg2 ;
+(id)codeStringForValue:(SCD_Struct_UI86)arg1 ;
+(void)performOperations:(/*^block*/id)arg1 withScale:(double)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGRect)frame;
-(id)shortDescription;
-(SCD_Struct_UI86)x;
-(SCD_Struct_UI86)y;
-(void)setPaddingLeft:(SCD_Struct_UI86)arg1 ;
-(void)setPaddingRight:(SCD_Struct_UI86)arg1 ;
-(SCD_Struct_UI86)paddingLeft;
-(SCD_Struct_UI86)paddingRight;
-(void)setX:(SCD_Struct_UI86)arg1 ;
-(void)setY:(SCD_Struct_UI86)arg1 ;
-(void)setW:(SCD_Struct_UI86)arg1 ;
-(void)setH:(SCD_Struct_UI86)arg1 ;
-(id)initWithName:(id)arg1 rect:(SCD_Struct_UI87)arg2 padding:(SCD_Struct_UI87)arg3 ;
-(SCD_Struct_UI86)w;
-(SCD_Struct_UI86)h;
-(SCD_Struct_UI86)paddingTop;
-(void)setPaddingTop:(SCD_Struct_UI86)arg1 ;
-(SCD_Struct_UI86)paddingBottom;
-(void)setPaddingBottom:(SCD_Struct_UI86)arg1 ;
-(BOOL)explicitlySpecified;
-(void)setExplicitlySpecified:(BOOL)arg1 ;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(CGRect)frameWithContainingFrame:(CGRect)arg1 ;
-(CGRect)paddedFrameWithResolvedFrame:(CGRect)arg1 ;
-(id)initTemplateWithName:(id)arg1 rect:(SCD_Struct_UI87)arg2 padding:(SCD_Struct_UI87)arg3 ;
-(CGRect)paddedFrameWithContainingFrame:(CGRect)arg1 ;
-(id)overrideGeometry:(id)arg1 ;
-(BOOL)usesPercentages;
-(BOOL)usesAutomaticMetrics;
@end

