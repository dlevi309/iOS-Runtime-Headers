/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSDataCompressor : NSObject {

	SCD_Struct_NS14* _stream;
	int _operation;
	int _status;
	void* _originalDstBuffer;
	/*^block*/id _dataHandler;

}
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithAlgorithm:(long long)arg1 operation:(int)arg2 dataHandler:(/*^block*/id)arg3 ;
-(BOOL)finishProcessing;
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 flags:(int)arg3 ;
-(void)dealloc;
@end

