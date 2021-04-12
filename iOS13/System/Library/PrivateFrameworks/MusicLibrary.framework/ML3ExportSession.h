/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <CoreFoundation/NSData.h>

@class ML3MusicLibrary, NSOutputStream;

@interface ML3ExportSession : NSData {

	ML3MusicLibrary* _library;
	NSOutputStream* _outputStream;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                  //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(NSOutputStream *)outputStream;
-(id)end;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 outputStream:(id)arg2 ;
-(id)begin:(unsigned)arg1 ;
-(id)exportTrackAdded:(unsigned long long)arg1 ;
-(id)exportTrackUpdated:(unsigned long long)arg1 ;
-(id)exportTrackDeleted:(unsigned long long)arg1 ;
-(id)exportPlaylistAdded:(unsigned long long)arg1 ;
-(id)exportPlaylistDeleted:(unsigned long long)arg1 ;
@end

