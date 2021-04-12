/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

