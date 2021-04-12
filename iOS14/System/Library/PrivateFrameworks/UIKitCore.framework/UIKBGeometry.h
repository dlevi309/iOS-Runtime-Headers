/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {

	NSString* m_name;
	SCD_Struct_UI96 m_x;
	SCD_Struct_UI96 m_y;
	SCD_Struct_UI96 m_w;
	SCD_Struct_UI96 m_h;
	SCD_Struct_UI96 m_paddingTop;
	SCD_Struct_UI96 m_paddingLeft;
	SCD_Struct_UI96 m_paddingBottom;
	SCD_Struct_UI96 m_paddingRight;
	BOOL m_explicitlySpecified;
	BOOL m_isTemplate;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,setter=setX:,nonatomic) SCD_Struct_UI96 x; 
@property (assign,setter=setY:,nonatomic) SCD_Struct_UI96 y; 
@property (assign,setter=setW:,nonatomic) SCD_Struct_UI96 w; 
@property (assign,setter=setH:,nonatomic) SCD_Struct_UI96 h; 
@property (assign,setter=setPaddingTop:,nonatomic) SCD_Struct_UI96 paddingTop; 
@property (assign,setter=setPaddingLeft:,nonatomic) SCD_Struct_UI96 paddingLeft; 
@property (assign,setter=setPaddingBottom:,nonatomic) SCD_Struct_UI96 paddingBottom; 
@property (assign,setter=setPaddingRight:,nonatomic) SCD_Struct_UI96 paddingRight; 
@property (assign,nonatomic) BOOL explicitlySpecified; 
@property (assign,nonatomic) BOOL isTemplate; 
+(id)geometry;
+(id)geometryWithRect:(CGRect)arg1 ;
+(void)performOperations:(/*^block*/id)arg1 withScale:(double)arg2 ;
+(id)geometryWithOriginValue:(SCD_Struct_UI96)arg1 sizeValue:(SCD_Struct_UI96)arg2 ;
+(id)codeStringForValue:(SCD_Struct_UI96)arg1 ;
-(SCD_Struct_UI96)h;
-(SCD_Struct_UI96)x;
-(SCD_Struct_UI96)w;
-(void)setX:(SCD_Struct_UI96)arg1 ;
-(SCD_Struct_UI96)paddingBottom;
-(void)setY:(SCD_Struct_UI96)arg1 ;
-(id)init;
-(SCD_Struct_UI96)y;
-(void)setH:(SCD_Struct_UI96)arg1 ;
-(CGRect)paddedFrameWithContainingFrame:(CGRect)arg1 ;
-(BOOL)usesAutomaticMetrics;
-(void)setPaddingTop:(SCD_Struct_UI96)arg1 ;
-(id)initWithName:(id)arg1 rect:(SCD_Struct_UI97)arg2 padding:(SCD_Struct_UI97)arg3 ;
-(BOOL)isTemplate;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(id)shortDescription;
-(NSString *)name;
-(CGRect)paddedFrameWithResolvedFrame:(CGRect)arg1 ;
-(id)description;
-(void)setW:(SCD_Struct_UI96)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setExplicitlySpecified:(BOOL)arg1 ;
-(void)setPaddingBottom:(SCD_Struct_UI96)arg1 ;
-(void)setPaddingLeft:(SCD_Struct_UI96)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initTemplateWithName:(id)arg1 rect:(SCD_Struct_UI97)arg2 padding:(SCD_Struct_UI97)arg3 ;
-(SCD_Struct_UI96)paddingTop;
-(id)overrideGeometry:(id)arg1 ;
-(SCD_Struct_UI96)paddingLeft;
-(void)setPaddingRight:(SCD_Struct_UI96)arg1 ;
-(void)setIsTemplate:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_UI96)paddingRight;
-(CGRect)frameWithContainingFrame:(CGRect)arg1 ;
-(BOOL)explicitlySpecified;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)usesPercentages;
@end

