/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXComponentAdvertisingMetadataProviding.h>

@class NSString, SXJSONDictionary;

@interface SXVideoComponent : SXComponent <SXComponentAdvertisingMetadataProviding>

@property (nonatomic,readonly) NSString * stillImageIdentifier; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) BOOL enablePreroll; 
@property (nonatomic,readonly) NSString * prerollPlacementIdentifier; 
@property (nonatomic,readonly) SXJSONDictionary * advertising; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)typeString;
-(SXJSONDictionary *)advertising;
-(NSString *)prerollPlacementIdentifier;
-(BOOL)enablePreroll;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(double)aspectRatio;
-(NSString *)resourceIdentifier;
-(NSString *)stillImageIdentifier;
-(unsigned long long)traits;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(double)aspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)enablePrerollWithValue:(id)arg1 withType:(int)arg2 ;
@end

