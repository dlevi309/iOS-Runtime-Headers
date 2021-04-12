/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSURL, NSString, NSFileManager, NSMutableIndexSet, NSObject;

@interface PLSimpleDCIMDirectory : NSObject {

	NSURL* _baseURL;
	NSString* _subDirSuffix;
	unsigned long long _directoryLimit;
	NSFileManager* _fileManager;
	NSMutableIndexSet* _availableFileNameNumbers;
	NSURL* _currentSubDirectory;
	unsigned long long _currentSubDirectoryNumber;
	NSString* _userInfoPath;
	BOOL _hasLoadedUserInfo;
	BOOL _representsCameraRoll;
	NSObject*<OS_dispatch_queue> _isolation;

}

@property (nonatomic,retain,readonly) NSURL * currentSubDirectory; 
@property (assign) BOOL representsCameraRoll;                                   //@synthesize representsCameraRoll=_representsCameraRoll - In the implementation block
@property (readonly) NSURL * directoryURL;                                      //@synthesize baseURL=_baseURL - In the implementation block
+(id)cameraRollPlistName;
+(id)migrateOldPlistToNewPlist:(id)arg1 ;
+(id)cloudPlistName;
-(id)init;
-(void)reset;
-(NSURL *)directoryURL;
-(void)setRepresentsCameraRoll:(BOOL)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4 ;
-(id)nextAvailableFileURLWithExtension:(id)arg1 ;
-(BOOL)representsCameraRoll;
-(void)_saveUserInfo;
-(BOOL)_ensureDirectoryExists:(id)arg1 ;
-(NSURL *)currentSubDirectory;
-(void)_loadUserInfoLastDirectoryNumber:(id*)arg1 lastFileNumber:(id*)arg2 ;
-(id)subDirURLForNumber:(unsigned long long)arg1 create:(BOOL)arg2 didCreate:(BOOL*)arg3 ;
-(NSRange)fileNameNumberRangeForDirNumber:(unsigned long long)arg1 ;
-(id)availableFileNameNumbersInDirNumber:(unsigned long long)arg1 ;
@end

