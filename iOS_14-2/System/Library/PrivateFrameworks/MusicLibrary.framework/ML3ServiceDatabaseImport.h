/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3DatabaseImport.h>

@class ML3MusicLibrary, ML3MediaLibraryWriter, ML3Client;

@interface ML3ServiceDatabaseImport : ML3DatabaseImport {

	ML3MusicLibrary* _library;
	ML3MediaLibraryWriter* _writer;
	ML3Client* _client;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                   //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) ML3MediaLibraryWriter * writer;              //@synthesize writer=_writer - In the implementation block
@property (nonatomic,readonly) ML3Client * client;                          //@synthesize client=_client - In the implementation block
-(ML3MusicLibrary *)library;
-(ML3Client *)client;
-(ML3MediaLibraryWriter *)writer;
-(id)initWithDatabaseImport:(id)arg1 library:(id)arg2 writer:(id)arg3 client:(id)arg4 ;
@end

