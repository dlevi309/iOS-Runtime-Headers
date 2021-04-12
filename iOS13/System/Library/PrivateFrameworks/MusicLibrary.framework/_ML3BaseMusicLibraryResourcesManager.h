/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/ML3MusicLibraryResourcesProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _ML3BaseMusicLibraryResourcesManager : NSObject <ML3MusicLibraryResourcesProviding, NSSecureCoding> {

	NSString* _libraryContainerIdentifier;

}

@property (nonatomic,copy,readonly) NSString * libraryContainerIdentifier;              //@synthesize libraryContainerIdentifier=_libraryContainerIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)pathForResourceFileOrFolder:(int)arg1 ;
-(id)libraryContainerPathByAppendingPathComponent:(id)arg1 ;
-(NSString *)libraryContainerIdentifier;
-(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4 ;
-(id)libraryContainerPath;
-(id)libraryContainerRelativePath:(id)arg1 ;
-(id)pathForBaseLocationPath:(long long)arg1 ;
-(id)initWithAccountInfo:(id)arg1 ;
-(id)initWithLibraryContainerIdentifier:(id)arg1 ;
-(id)_libraryContainerPathForDSID:(id)arg1 ;
-(id)_pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 isFolder:(BOOL*)arg4 ;
-(id)_controlDirectoryPathWithBasePath:(id)arg1 ;
-(BOOL)_mediaResourceRequiresLibraryContainerAccess:(int)arg1 ;
@end

