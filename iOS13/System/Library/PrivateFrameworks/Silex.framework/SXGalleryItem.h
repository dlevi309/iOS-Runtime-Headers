/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

