/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSDictionary, NSSet, NSArray;

@interface PKSecureElementConsistencyCheckResults : NSObject {

	long long _cleanupActions;
	NSDictionary* _summary;
	NSSet* _appletsToDelete;
	NSArray* _registerRegions;
	NSSet* _credentialsToRegister;
	NSSet* _credentialsToDelete;

}

@property (nonatomic,readonly) long long cleanupActions;                   //@synthesize cleanupActions=_cleanupActions - In the implementation block
@property (nonatomic,readonly) NSDictionary * summary;                     //@synthesize summary=_summary - In the implementation block
@property (nonatomic,readonly) NSSet * appletsToDelete;                    //@synthesize appletsToDelete=_appletsToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * registerRegions;                  //@synthesize registerRegions=_registerRegions - In the implementation block
@property (nonatomic,readonly) NSSet * credentialsToRegister;              //@synthesize credentialsToRegister=_credentialsToRegister - In the implementation block
@property (nonatomic,readonly) NSSet * credentialsToDelete;                //@synthesize credentialsToDelete=_credentialsToDelete - In the implementation block
-(NSDictionary *)summary;
-(id)initWithCleanupActions:(long long)arg1 resultsSummary:(id)arg2 appletsToDelete:(id)arg3 credentialsToRegister:(id)arg4 credentialsToDelete:(id)arg5 registeredRegions:(id)arg6 ;
-(long long)cleanupActions;
-(NSSet *)appletsToDelete;
-(NSArray *)registerRegions;
-(NSSet *)credentialsToRegister;
-(NSSet *)credentialsToDelete;
@end

