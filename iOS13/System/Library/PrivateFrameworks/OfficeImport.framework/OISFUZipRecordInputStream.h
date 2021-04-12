/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OISFUBufferedInputStream;
@interface OISFUZipRecordInputStream : NSObject {

	id<OISFUBufferedInputStream> mInput;
	const char* mBuffer;
	long long mBufferStart;
	long long mBufferEnd;

}
-(void)dealloc;
-(id)initWithDataRepresentation:(id)arg1 ;
-(const char*)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 ;
@end

