/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

