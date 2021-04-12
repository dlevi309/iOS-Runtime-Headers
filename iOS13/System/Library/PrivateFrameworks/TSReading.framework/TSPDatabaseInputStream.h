/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSUStreamReadChannel.h>
#import <libobjc.A.dylib/SFUInputStream.h>

@class NSString;

@interface TSPDatabaseInputStream : NSObject <TSUStreamReadChannel, SFUInputStream> {

	sqlite3_blobRef _blob;
	int _offset;
	int _length;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithBlob:(sqlite3_blobRef)arg1 ;
@end

