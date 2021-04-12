/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXRenderingConfigurationOption.h>
@class NSString;


@protocol SXRenderingConfigurationOption <NSObject>
@property (nonatomic,readonly) NSString * minClientSpecVersion; 
@property (nonatomic,readonly) NSString * maxClientSpecVersion; 
@property (nonatomic,readonly) NSString * minDocumentSpecVersion; 
@property (nonatomic,readonly) NSString * maxDocumentSpecVersion; 
@required
-(NSString *)minClientSpecVersion;
-(NSString *)maxClientSpecVersion;
-(NSString *)minDocumentSpecVersion;
-(NSString *)maxDocumentSpecVersion;

@end


@class NSString;

@interface SXRenderingConfigurationOption : SXJSONObject <SXRenderingConfigurationOption>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * minClientSpecVersion; 
@property (nonatomic,readonly) NSString * maxClientSpecVersion; 
@property (nonatomic,readonly) NSString * minDocumentSpecVersion; 
@property (nonatomic,readonly) NSString * maxDocumentSpecVersion; 
-(NSString *)maxDocumentSpecVersion;
-(NSString *)minDocumentSpecVersion;
-(NSString *)maxClientSpecVersion;
-(NSString *)minClientSpecVersion;
@end

