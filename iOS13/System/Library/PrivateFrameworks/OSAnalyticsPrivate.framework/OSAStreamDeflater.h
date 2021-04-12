/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


#import <OSAnalyticsPrivate/OSAnalyticsPrivate-Structs.h>
@interface OSAStreamDeflater : NSObject {

	z_stream_s* _strm;
	char* _in;
	char* _out;
	BOOL _capViolation;

}

@property (assign) BOOL capViolation;              //@synthesize capViolation=_capViolation - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyDeflatedDataFromStream:(_sFILE*)arg1 withCap:(unsigned)arg2 ;
-(BOOL)capViolation;
-(void)setCapViolation:(BOOL)arg1 ;
@end

