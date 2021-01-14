/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXComponentLayout.h>

@class SXJSONArray, NSString;

@interface SXComponentLayout : SXJSONObject <SXComponentLayout>

@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSRange columnRange; 
@property (nonatomic,readonly) unsigned long long ignoreDocumentMargin; 
@property (nonatomic,readonly) unsigned long long ignoreDocumentGutter; 
@property (nonatomic,readonly) unsigned long long ignoreViewportPadding; 
@property (nonatomic,readonly) id<SXEdgeSpacing> margin; 
@property (nonatomic,readonly) SXComponentContentInset contentInset; 
@property (nonatomic,readonly) SXConvertibleValue minimumHeight; 
@property (nonatomic,readonly) SXConvertibleValue suggestedHeight; 
@property (nonatomic,readonly) SXConvertibleValue maximumContentWidth; 
@property (nonatomic,readonly) unsigned long long horizontalContentAlignment; 
@property (nonatomic,readonly) id<SXEdgeSpacing> padding; 
@property (nonatomic,readonly) SXConvertibleValue minimumWidth; 
@property (nonatomic,readonly) SXConvertibleValue maximumWidth; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(SXConvertibleValue)maximumWidth;
-(SXConvertibleValue)minimumWidth;
-(id<SXEdgeSpacing>)padding;
-(unsigned long long)horizontalContentAlignment;
-(SXConvertibleValue)maximumContentWidth;
-(SXConvertibleValue)suggestedHeight;
-(SXConvertibleValue)minimumHeight;
-(SXComponentContentInset)contentInset;
-(id<SXEdgeSpacing>)margin;
-(unsigned long long)ignoreViewportPadding;
-(unsigned long long)ignoreDocumentGutter;
-(unsigned long long)ignoreDocumentMargin;
-(NSRange)columnRange;
-(NSString *)identifier;
-(SXJSONArray *)conditional;
-(id)paddingWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)ignoreDocumentMarginWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)ignoreDocumentGutterWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)ignoreViewportPaddingWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)horizontalContentAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
@end

