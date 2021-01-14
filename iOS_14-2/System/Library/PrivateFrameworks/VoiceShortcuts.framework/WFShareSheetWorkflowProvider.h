/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCDatabaseProvider;
@interface WFShareSheetWorkflowProvider : NSObject {

	id<VCDatabaseProvider> _databaseProvider;

}

@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
-(id)initWithDatabaseProvider:(id)arg1 ;
-(id<VCDatabaseProvider>)databaseProvider;
-(id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 ;
@end

