/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@interface CXCallDirectoryStoreMigrationResult : NSObject {

	BOOL _requiresExtensionDisablement;
	BOOL _requiresExtensionSynchronization;
	long long _startingSchemaVersion;
	long long _endingSchemaVersion;

}

@property (assign,nonatomic) long long startingSchemaVersion;                    //@synthesize startingSchemaVersion=_startingSchemaVersion - In the implementation block
@property (assign,nonatomic) long long endingSchemaVersion;                      //@synthesize endingSchemaVersion=_endingSchemaVersion - In the implementation block
@property (assign,nonatomic) BOOL requiresExtensionDisablement;                  //@synthesize requiresExtensionDisablement=_requiresExtensionDisablement - In the implementation block
@property (assign,nonatomic) BOOL requiresExtensionSynchronization;              //@synthesize requiresExtensionSynchronization=_requiresExtensionSynchronization - In the implementation block
-(void)setStartingSchemaVersion:(long long)arg1 ;
-(void)setEndingSchemaVersion:(long long)arg1 ;
-(void)setRequiresExtensionDisablement:(BOOL)arg1 ;
-(void)setRequiresExtensionSynchronization:(BOOL)arg1 ;
-(long long)startingSchemaVersion;
-(long long)endingSchemaVersion;
-(BOOL)requiresExtensionDisablement;
-(BOOL)requiresExtensionSynchronization;
@end

