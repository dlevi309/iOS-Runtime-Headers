/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class NSString, SXFormattedText;

@interface SXGalleryItem : SXJSONObject

@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) SXFormattedText * captionComponent; 
-(SXFormattedText *)captionComponent;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(NSString *)imageIdentifier;
@end

