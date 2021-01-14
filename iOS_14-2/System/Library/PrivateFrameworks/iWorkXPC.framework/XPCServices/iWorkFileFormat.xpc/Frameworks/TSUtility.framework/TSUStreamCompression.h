/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUStreamCompression : NSObject {

	int _status;
	SCD_Struct_TS60* _stream;
	int _operation;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)setHandler:(id)arg1 ;
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 ;
-(id)handler;
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 flags:(int)arg3 ;
-(void)dealloc;
-(BOOL)didFinishProcessing;
-(id)initWithAlgorithm:(int)arg1 operation:(int)arg2 ;
@end

