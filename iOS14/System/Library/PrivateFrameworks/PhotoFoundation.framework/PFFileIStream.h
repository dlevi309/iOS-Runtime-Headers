/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFFile.h>
#import <libobjc.A.dylib/PFIStream.h>
#import <libobjc.A.dylib/PFStream.h>

@class NSError, NSString;

@interface PFFileIStream : PFFile <PFIStream, PFStream> {

	_sFILE* _file;
	char* _buffer;
	unsigned long long _bufferLength;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unlock;
-(void)lock;
-(void)setError:(id)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(BOOL)openStream;
-(void)closeStream;
-(long long)streamLength;
-(long long)streamPosition;
-(BOOL)rewindStream;
-(BOOL)rewindStream:(long long)arg1 ;
-(BOOL)advanceStream;
-(BOOL)advanceStream:(long long)arg1 distanceMoved:(long long*)arg2 ;
-(id)getStreamError;
-(unsigned long long)preferredStreamBlockSize;
-(const char*)streamData:(unsigned long long*)arg1 ;
-(void)updateError;
-(BOOL)createDirectoryIfNecessary;
-(BOOL)readStream:(char*)arg1 length:(unsigned long long)arg2 read:(unsigned long long*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

