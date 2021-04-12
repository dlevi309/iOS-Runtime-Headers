/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>

@class NSString, SXFormattedText;

@interface SXScalableImageComponent : SXComponent

@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) BOOL userControllable; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) SXFormattedText * captionComponent; 
+(id)typeString;
-(SXFormattedText *)captionComponent;
-(NSString *)accessibilityCaption;
-(BOOL)userControllable;
-(NSString *)caption;
-(NSString *)imageIdentifier;
-(unsigned long long)traits;
@end

