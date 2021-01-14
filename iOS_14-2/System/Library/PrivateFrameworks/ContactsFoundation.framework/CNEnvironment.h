/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSFileManager, CNUserDefaults, NSString, NSNumber;

@interface CNEnvironment : NSObject {

	NSFileManager* _fileManager;
	CNUserDefaults* _userDefaults;
	NSString* _mainBundleIdentifier;
	NSNumber* _isInternalBuildStorage;
	NSNumber* _isCommLimitsEnabledStorage;
	NSNumber* _isCommLimitsPersistenceAccessibleStorage;

}

@property (nonatomic,readonly) NSFileManager * fileManager;                                      //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) CNUserDefaults * userDefaults;                                    //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) NSString * mainBundleIdentifier;                                  //@synthesize mainBundleIdentifier=_mainBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * isInternalBuildStorage;                                //@synthesize isInternalBuildStorage=_isInternalBuildStorage - In the implementation block
@property (nonatomic,readonly) NSNumber * isCommLimitsEnabledStorage;                            //@synthesize isCommLimitsEnabledStorage=_isCommLimitsEnabledStorage - In the implementation block
@property (nonatomic,readonly) NSNumber * isCommLimitsPersistenceAccessibleStorage;              //@synthesize isCommLimitsPersistenceAccessibleStorage=_isCommLimitsPersistenceAccessibleStorage - In the implementation block
+(id)currentEnvironment;
-(NSFileManager *)fileManager;
-(id)init;
-(NSNumber *)isInternalBuildStorage;
-(id)initWithFileManager:(id)arg1 userDefaults:(id)arg2 mainBundleIdentifier:(id)arg3 ;
-(CNUserDefaults *)userDefaults;
-(NSString *)mainBundleIdentifier;
-(BOOL)isInternalBuild;
-(BOOL)isCommLimitsEnabledImpl;
-(NSNumber *)isCommLimitsPersistenceAccessibleStorage;
-(BOOL)isCommLimitsEnabled;
-(NSNumber *)isCommLimitsEnabledStorage;
-(BOOL)isInternalBuildImpl;
@end

