/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3 ;
-(id)decodeData:(id)arg1 ;
-(id)init;
-(id)filenameWithOriginalFilename:(id)arg1 ;
-(BOOL)finishDownloadDecoding;
-(BOOL)isFinishedDecoding;
-(void)dealloc;
-(id)fileAttributes;
@end

