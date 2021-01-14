/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXDocumentStyle.h>

@protocol SXDocumentStyle <SXDocumentStyleProperties,SXConditionalObject>
@end


@class UIColor, SXJSONLinearGradient, NSString, SXJSONArray;

@interface SXDocumentStyle : SXJSONObject <SXDocumentStyle>

@property (nonatomic,readonly) UIColor * topBackgroundColor; 
@property (nonatomic,readonly) SXJSONLinearGradient * topBackgroundGradient; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)conditional;
-(UIColor *)backgroundColor;
-(SXJSONLinearGradient *)topBackgroundGradient;
-(UIColor *)topBackgroundColor;
@end

