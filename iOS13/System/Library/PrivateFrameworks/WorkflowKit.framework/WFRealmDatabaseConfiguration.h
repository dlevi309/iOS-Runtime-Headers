/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class RLMRealmConfiguration;

@interface WFRealmDatabaseConfiguration : NSObject {

	RLMRealmConfiguration* _realmConfiguration;

}

@property (nonatomic,readonly) RLMRealmConfiguration * realmConfiguration;              //@synthesize realmConfiguration=_realmConfiguration - In the implementation block
+(id)systemShortcutsConfiguration;
+(id)inMemoryConfiguration;
+(id)inMemoryConfigurationWithIdentifier:(id)arg1 ;
-(RLMRealmConfiguration *)realmConfiguration;
@end

