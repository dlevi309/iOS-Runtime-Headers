/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSDataCompressor : NSObject {

	SCD_Struct_NS13* _stream;
	int _operation;
	int _status;
	void* _originalDstBuffer;
	/*^block*/id _dataHandler;

}
-(void)dealloc;
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 flags:(int)arg3 ;
-(id)initWithAlgorithm:(long long)arg1 operation:(int)arg2 dataHandler:(/*^block*/id)arg3 ;
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)finishProcessing;
@end

