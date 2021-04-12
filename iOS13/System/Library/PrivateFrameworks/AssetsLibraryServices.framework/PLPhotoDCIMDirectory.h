/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)unlockDirectory;
-(id)nextAvailableDirectory;
-(void)lockDirectory;
-(id)initWithDCIMPath:(id)arg1 ;
-(id)_userInfoPath;
-(void)saveUserInfo;
-(id)userInfoObjectForKey:(id)arg1 ;
-(id)dcimPath;
-(id)miscPath;
-(id)posterImagePath;
-(void)recreateInfoPlist;
-(void)reloadUserInfo;
-(id)dcfDirectories;
-(void)clearDCFDirectories;
-(BOOL)hasChangedExternally;
-(void)setHasChangedExternally:(BOOL)arg1 ;
@end

