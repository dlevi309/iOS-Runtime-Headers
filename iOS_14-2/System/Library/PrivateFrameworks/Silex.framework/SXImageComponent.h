/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>

@class NSString, NSAttributedString;

@interface SXImageComponent : SXComponent

@property (nonatomic,readonly) NSString * imageIdentifier; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) BOOL userControllable; 
@property (nonatomic,readonly) BOOL shouldBeExposedToAssistiveTechnology; 
@property (nonatomic,readonly) NSAttributedString * captionWithLocalizedRoleForSpeaking; 
+(id)typeString;
-(BOOL)userControllable;
-(NSString *)caption;
-(NSString *)imageIdentifier;
-(unsigned long long)traits;
-(NSAttributedString *)captionWithLocalizedRoleForSpeaking;
-(BOOL)shouldBeExposedToAssistiveTechnology;
@end

