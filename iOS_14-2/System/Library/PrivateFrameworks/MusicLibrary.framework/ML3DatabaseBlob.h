/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3DatabaseBlob : NSObject {

	sqlite3_blobRef _sqliteHandle;

}
-(id)init;
-(unsigned long long)length;
-(id)data;
-(void)dealloc;
-(int)readData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)initWithSQLiteHandle:(sqlite3_blobRef)arg1 ;
-(int)writeData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
@end

