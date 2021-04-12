/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLPhotoDCFObject.h>

@class PLPhotoDCIMDirectory, NSMutableDictionary;

@interface PLPhotoDCFDirectory : PLPhotoDCFObject {

	PLPhotoDCIMDirectory* _dcimDirectory;
	NSMutableDictionary* _fileGroupsByNumber;
	int _maxFileGroupNumber;
	int _lastUsedFileGroupNumber;
	BOOL _considerInvalidFileGroups;

}

@property (assign) BOOL considerInvalidFileGroups;              //@synthesize considerInvalidFileGroups=_considerInvalidFileGroups - In the implementation block
+(id)fileGroupRequiredEmptyExtensions;
+(id)fileGroupRequiredEmptyPrefixes;
+(void)initializeFileGroupPrefixAndExtensions;
-(id)fullPath;
-(void)ensureDirectoryExists;
-(id)nextAvailableFileGroup;
-(id)_lastUsedFileGroupUserInfoKey;
-(id)initWithName:(id)arg1 number:(int)arg2 dcimDirectory:(id)arg3 ;
-(id)dcimDirectory;
-(unsigned)_calculateBaseDirectoryValue;
-(BOOL)canAddFileGroupWithGroupNumber:(int)arg1 ;
-(BOOL)_canAddItemWithPrefix:(id)arg1 minimumFileGroupNumber:(int)arg2 ;
-(BOOL)_canAddItemWithPrefix:(id)arg1 ;
-(BOOL)canAddImage;
-(BOOL)canAddVideo;
-(BOOL)isEntensionValid:(id)arg1 ;
-(id)fileGroups;
-(id)_nextAvailableFileGroupWithPrefix:(id)arg1 extension:(id)arg2 ;
-(id)nextAvailableVideoFileGroupWithExtension:(id)arg1 ;
-(void)removeFileGroup:(id)arg1 ;
-(void)setWriteIsPending:(BOOL)arg1 ;
-(BOOL)considerInvalidFileGroups;
-(void)setConsiderInvalidFileGroups:(BOOL)arg1 ;
@end

