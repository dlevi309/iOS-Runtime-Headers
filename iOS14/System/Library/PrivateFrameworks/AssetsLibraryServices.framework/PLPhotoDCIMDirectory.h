/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {

	NSString* _dcimPath;
	NSString* _miscPath;
	NSString* _posterImagePath;
	NSMutableArray* _topLevelDirectories;
	CFDictionaryRef _topLevelDirectoriesByNumber;
	CFSetRef _unusableTopLevelDirectoryNumbers;
	int _lastUsedDirectoryNumber;
	NSMutableDictionary* _userInfo;
	BOOL _userInfoDidChange;
	flock* _dcimDirectoryLock;
	int _dcimDirectoryLockDescriptor;

}
-(id)userInfo;
-(id)dcimPath;
-(id)_userInfoPath;
-(id)miscPath;
-(void)saveUserInfo;
-(id)posterImagePath;
-(void)recreateInfoPlist;
-(void)reloadUserInfo;
-(id)userInfoObjectForKey:(id)arg1 ;
-(id)dcfDirectories;
-(void)clearDCFDirectories;
-(BOOL)hasChangedExternally;
-(void)setHasChangedExternally:(BOOL)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)unlockDirectory;
-(id)nextAvailableDirectory;
-(void)lockDirectory;
-(id)initWithDCIMPath:(id)arg1 ;
-(void)dealloc;
@end

