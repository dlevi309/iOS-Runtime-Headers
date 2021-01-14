/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)basePath;
-(BOOL)finish:(id*)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(BOOL)open:(id*)arg1 ;
-(BOOL)flatten;
-(void)setBasePath:(NSString *)arg1 ;
-(BOOL)writeURL:(id)arg1 isDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)writeURLs:(id)arg1 error:(id*)arg2 ;
-(BOOL)usesCompression;
-(NSString *)flattenFolderName;
-(id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2 ;
-(void)setUsesCompression:(BOOL)arg1 ;
-(void)setFlatten:(BOOL)arg1 ;
-(void)setFlattenFolderName:(NSString *)arg1 ;
-(void)dealloc;
@end

