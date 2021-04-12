/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) id<SXTextStyleFontAttributes> fontAttributes; 
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

