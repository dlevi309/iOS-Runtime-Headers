/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

