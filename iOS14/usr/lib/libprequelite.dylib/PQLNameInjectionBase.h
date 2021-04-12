/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libprequelite.dylib
*/

#import <CoreFoundation/NSData.h>

@class NSData;

@interface PQLNameInjectionBase : NSData {

	unsigned long long _length;
	char* _bytes;

}

@property (nonatomic,readonly) NSData * sql; 
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(NSData *)sql;
-(const void*)bytes;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(void)dealloc;
@end

