/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3ExportSession.h>

@class NSString, MSVStreamWriter;

@interface ML3ProtoSyncExportSession : ML3ExportSession {

	NSString* _libraryUUID;
	int _syncType;
	MSVStreamWriter* _streamWriter;
	SCD_Struct_ML54 _stats;
	double _sessionStartTime;

}
-(id)end;
-(id)begin:(unsigned)arg1 ;
-(id)exportTrackAdded:(unsigned long long)arg1 ;
-(id)exportTrackUpdated:(unsigned long long)arg1 ;
-(id)exportTrackDeleted:(unsigned long long)arg1 ;
-(id)exportPlaylistAdded:(unsigned long long)arg1 ;
-(id)exportPlaylistDeleted:(unsigned long long)arg1 ;
-(id)_writSyncPackageToStream:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 outputStream:(id)arg2 syncType:(int)arg3 ;
@end

