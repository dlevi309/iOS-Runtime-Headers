/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

@class NSDictionary;


@protocol PTEditingServerDataSource <NSObject>
@property (nonatomic,readonly) NSDictionary * domainInfoByID; 
@property (nonatomic,readonly) NSDictionary * testRecipeInfoByID; 
@required
-(id)rootSettingsArchiveForDomainID:(id)arg1;
-(id)rootSettingsProxyDefinitionForDomainID:(id)arg1;
-(id)activeTestRecipeID;
-(NSDictionary *)domainInfoByID;
-(NSDictionary *)testRecipeInfoByID;

@end

