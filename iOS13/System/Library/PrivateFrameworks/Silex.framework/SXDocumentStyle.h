/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXDocumentStyle.h>

@protocol SXDocumentStyle <SXDocumentStyleProperties,SXConditionalObject>
@end


@class NSString, UIColor, SXJSONLinearGradient, SXJSONArray;

@interface SXDocumentStyle : SXJSONObject <SXDocumentStyle>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIColor * topBackgroundColor; 
@property (nonatomic,readonly) SXJSONLinearGradient * topBackgroundGradient; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)conditional;
-(UIColor *)backgroundColor;
-(SXJSONLinearGradient *)topBackgroundGradient;
-(UIColor *)topBackgroundColor;
@end

