/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFFileIStream.h>
#import <libobjc.A.dylib/PFOStream.h>

@class NSString;

@interface PFFileIOStream : PFFileIStream <PFOStream>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)reserveLength:(long long)arg1 ;
-(BOOL)writeStream:(const char*)arg1 length:(unsigned long long)arg2 written:(unsigned long long*)arg3 ;
-(BOOL)writeStream:(id)arg1 ;
-(BOOL)writeStream:(id)arg1 blockSize:(unsigned long long)arg2 ;
-(BOOL)truncateLength:(long long)arg1 ;
-(BOOL)openStream;
@end

