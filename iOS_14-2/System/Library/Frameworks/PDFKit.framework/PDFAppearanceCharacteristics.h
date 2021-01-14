/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFAppearanceCharacteristicsPrivate, UIColor, NSString, NSDictionary;

@interface PDFAppearanceCharacteristics : NSObject <NSCopying> {

	PDFAppearanceCharacteristicsPrivate* _private;

}

@property (assign,nonatomic) long long controlType; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (nonatomic,copy) UIColor * borderColor; 
@property (assign,nonatomic) long long rotation; 
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,copy) NSString * rolloverCaption; 
@property (nonatomic,copy) NSString * downCaption; 
@property (nonatomic,copy,readonly) NSDictionary * appearanceCharacteristicsKeyValues; 
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setRotation:(long long)arg1 ;
-(id)init;
-(long long)rotation;
-(UIColor *)borderColor;
-(CGPDFFormRef)icon;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(long long)controlType;
-(void)setControlType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)dealloc;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forControlType:(long long)arg2 ;
-(NSDictionary *)appearanceCharacteristicsKeyValues;
-(CFDictionaryRef)createDictionaryRef;
-(void)addColor:(id)arg1 forKey:(CFStringRef)arg2 toDictionaryRef:(CFDictionaryRef)arg3 ;
-(BOOL)scaleProportional;
-(NSString *)rolloverCaption;
-(NSString *)downCaption;
-(void)setRolloverCaption:(NSString *)arg1 ;
-(void)setDownCaption:(NSString *)arg1 ;
@end

