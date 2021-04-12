/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXComponentAdvertisingMetadataProviding.h>

@class SXJSONDictionary, NSString;

@interface SXVideoComponent : SXComponent <SXComponentAdvertisingMetadataProviding>

@property (nonatomic,readonly) NSString * stillImageIdentifier; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) BOOL enablePreroll; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONDictionary * advertising; 
+(id)typeString;
-(SXJSONDictionary *)advertising;
-(BOOL)enablePreroll;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(double)aspectRatio;
-(NSString *)resourceIdentifier;
-(NSString *)stillImageIdentifier;
-(unsigned long long)traits;
-(double)aspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)enablePrerollWithValue:(id)arg1 withType:(int)arg2 ;
@end

