/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OISFUBufferedInputStream;
@interface OISFUZipRecordInputStream : NSObject {

	id<OISFUBufferedInputStream> mInput;
	const char* mBuffer;
	long long mBufferStart;
	long long mBufferEnd;

}
-(id)initWithDataRepresentation:(id)arg1 ;
-(void)dealloc;
-(const char*)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 ;
@end

