/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/SFUInputStream.h>

@class NSString;

@interface OISFUGZipFileInputStream : NSObject <SFUInputStream> {

	int _fd;
	gzFile_s* _file;
	BOOL _isCachingDisabled;
	long long _offset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)canSeek;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
@end

