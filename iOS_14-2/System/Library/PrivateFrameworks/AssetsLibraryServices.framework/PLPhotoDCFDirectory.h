/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dcimDirectory;
-(id)_lastUsedFileGroupUserInfoKey;
-(id)initWithName:(id)arg1 number:(int)arg2 dcimDirectory:(id)arg3 ;
-(unsigned)_calculateBaseDirectoryValue;
-(BOOL)canAddFileGroupWithGroupNumber:(int)arg1 ;
-(BOOL)_canAddItemWithPrefix:(id)arg1 ;
-(BOOL)canAddImage;
-(BOOL)_canAddItemWithPrefix:(id)arg1 minimumFileGroupNumber:(int)arg2 ;
-(BOOL)canAddVideo;
-(BOOL)isEntensionValid:(id)arg1 ;
-(id)fileGroups;
-(id)_nextAvailableFileGroupWithPrefix:(id)arg1 extension:(id)arg2 ;
-(id)nextAvailableVideoFileGroupWithExtension:(id)arg1 ;
-(void)removeFileGroup:(id)arg1 ;
-(void)setWriteIsPending:(BOOL)arg1 ;
-(BOOL)considerInvalidFileGroups;
-(void)setConsiderInvalidFileGroups:(BOOL)arg1 ;
-(void)ensureDirectoryExists;
-(id)nextAvailableFileGroup;
@end

