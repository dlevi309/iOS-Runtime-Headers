/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)endingSchemaVersion;
-(void)setRequiresExtensionSynchronization:(BOOL)arg1 ;
-(BOOL)requiresExtensionDisablement;
-(BOOL)requiresExtensionSynchronization;
-(long long)startingSchemaVersion;
@end

