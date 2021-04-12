/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLDownloadDecoder.h>

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder> {

	z_stream_s* _stream;
	unsigned long long _modificationTime;
	NSString* _filename;
	BOOL _streamInitialized;
	BOOL _decodedHeader;
	BOOL _finishedInflating;
	BOOL _pad;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)MIMEType;
+(BOOL)decodeDownloadHeader:(id)arg1 headerLength:(int*)arg2 modificationTime:(unsigned long long*)arg3 filename:(id*)arg4 ;
+(BOOL)canDecodeDownloadHeaderData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)fileAttributes;
-(id)filenameWithOriginalFilename:(id)arg1 ;
-(id)decodeData:(id)arg1 ;
-(BOOL)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3 ;
-(BOOL)isFinishedDecoding;
-(BOOL)finishDownloadDecoding;
@end

