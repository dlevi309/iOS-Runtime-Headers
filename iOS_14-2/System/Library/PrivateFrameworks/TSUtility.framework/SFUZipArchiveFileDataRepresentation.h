/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/SFUDataRepresentation.h>
#import <libobjc.A.dylib/SFUZipArchiveDataRepresentation.h>

@class SFUFileDataRepresentation, NSString;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	SFUFileDataRepresentation* mFileRepresentation;
	int mFd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isReadable;
-(id)initWithPath:(id)arg1 ;
-(long long)dataLength;
-(id)path;
-(BOOL)isEncrypted;
-(id)inputStream;
-(void)dealloc;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
@end

