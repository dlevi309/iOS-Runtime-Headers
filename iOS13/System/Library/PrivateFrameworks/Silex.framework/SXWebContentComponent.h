/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXWebContentComponent.h>
@class NSURL, NSString, SXJSONDictionary;


@protocol SXWebContentComponent <SXComponent>
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) SXJSONDictionary * dataSourceReferences; 
@required
-(NSURL *)URL;
-(NSString *)resourceIdentifier;
-(SXJSONDictionary *)dataSourceReferences;

@end


@class NSURL, NSString, SXJSONDictionary, SXJSONArray, SXComponentAnimation, SXComponentConditions, SXComponentClassification;

@interface SXWebContentComponent : SXComponent <SXWebContentComponent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * layout; 
@property (nonatomic,readonly) NSString * style; 
@property (nonatomic,readonly) id<SXComponentAnchor> anchor; 
@property (nonatomic,readonly) SXJSONArray * behaviors; 
@property (nonatomic,readonly) SXComponentAnimation * animation; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentConditions * conditions; 
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) SXJSONDictionary * analytics; 
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) SXJSONDictionary * dataSourceReferences; 
+(id)typeString;
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
-(SXJSONDictionary *)dataSourceReferences;
-(NSString *)resourceIdentifier;
-(NSURL *)URL;
-(unsigned long long)traits;
@end

