/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


#import <ModelIO/ModelIO-Structs.h>
@interface MDLMemoryMappedData : NSObject {

	_sFILE* _file;
	char* _mappedAddr;
	char* _fileStart;
	long long _mappedFileSize;
	long long _length;

}
-(void)dealloc;
-(id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(id)dataNoCopy;
@end
