/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXTextStyleFontDescribing.h>

@class UIColor, NSString;

@interface SXDropCapStyle : SXJSONObject <SXTextStyleFontDescribing>

@property (nonatomic,readonly) long long numberOfLines; 
@property (nonatomic,readonly) long long numberOfRaisedLines; 
@property (nonatomic,readonly) long long numberOfCharacters; 
@property (nonatomic,readonly) UIColor * textColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long padding; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) id<SXTextStyleFontAttributes> fontAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(id<SXTextStyleFontAttributes>)fontAttributes;
-(NSString *)fontName;
-(long long)padding;
-(UIColor *)backgroundColor;
-(UIColor *)textColor;
-(long long)numberOfCharacters;
-(long long)numberOfRaisedLines;
-(long long)numberOfLines;
@end

