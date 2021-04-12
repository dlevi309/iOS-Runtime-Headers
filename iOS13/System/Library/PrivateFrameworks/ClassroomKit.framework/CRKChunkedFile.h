/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@interface CRKChunkedFile : NSObject {

	int mFileDescriptor;

}
+(long long)preferredChunkSizeForFileDescriptor:(int)arg1 ;
+(void)assertFileDescriptorIsValid:(int)arg1 ;
-(id)init;
-(id)initWithFileDescriptor:(int)arg1 ;
-(long long)readNextChunkIntoBuffer:(id)arg1 error:(id*)arg2 ;
@end

