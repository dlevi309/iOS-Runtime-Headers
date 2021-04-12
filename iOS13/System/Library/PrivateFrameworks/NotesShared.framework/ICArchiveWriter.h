/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSString, NSURL;

@interface ICArchiveWriter : NSObject {

	archiveRef _archive;
	BOOL _usesCompression;
	BOOL _flatten;
	NSString* _flattenFolderName;
	NSURL* _destinationURL;
	NSString* _basePath;

}

@property (nonatomic,retain) NSURL * destinationURL;                    //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) NSString * basePath;                       //@synthesize basePath=_basePath - In the implementation block
@property (assign,nonatomic) BOOL usesCompression;                      //@synthesize usesCompression=_usesCompression - In the implementation block
@property (assign,nonatomic) BOOL flatten;                              //@synthesize flatten=_flatten - In the implementation block
@property (nonatomic,retain) NSString * flattenFolderName;              //@synthesize flattenFolderName=_flattenFolderName - In the implementation block
-(void)dealloc;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(BOOL)finish:(id*)arg1 ;
-(BOOL)open:(id*)arg1 ;
-(NSString *)basePath;
-(BOOL)flatten;
-(id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2 ;
-(void)setUsesCompression:(BOOL)arg1 ;
-(BOOL)writeURLs:(id)arg1 error:(id*)arg2 ;
-(void)setBasePath:(NSString *)arg1 ;
-(BOOL)writeURL:(id)arg1 isDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)usesCompression;
-(NSString *)flattenFolderName;
-(void)setFlatten:(BOOL)arg1 ;
-(void)setFlattenFolderName:(NSString *)arg1 ;
@end

