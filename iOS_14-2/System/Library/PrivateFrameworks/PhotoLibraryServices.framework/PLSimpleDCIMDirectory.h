/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)migrateOldPlistToNewPlist:(id)arg1 ;
+(id)cloudPlistName;
+(id)cameraRollPlistName;
-(id)init;
-(id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4 ;
-(id)availableFileNameNumbersInDirNumber:(unsigned long long)arg1 ;
-(BOOL)representsCameraRoll;
-(id)nextAvailableFileURLWithExtension:(id)arg1 ;
-(BOOL)_ensureDirectoryExists:(id)arg1 ;
-(void)_loadUserInfoLastDirectoryNumber:(id*)arg1 lastFileNumber:(id*)arg2 ;
-(id)subDirURLForNumber:(unsigned long long)arg1 create:(BOOL)arg2 didCreate:(BOOL*)arg3 ;
-(NSRange)fileNameNumberRangeForDirNumber:(unsigned long long)arg1 ;
-(void)reset;
-(NSURL *)currentSubDirectory;
-(void)setRepresentsCameraRoll:(BOOL)arg1 ;
-(NSURL *)directoryURL;
-(void)_saveUserInfo;
@end

