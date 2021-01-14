/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/DEWriter.h>

@interface DESizeWriter : NSObject <DEWriter> {

	unsigned long long _size;

}

@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
-(id)init;
-(void)close;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(void)writeData:(id)arg1 ;
@end

