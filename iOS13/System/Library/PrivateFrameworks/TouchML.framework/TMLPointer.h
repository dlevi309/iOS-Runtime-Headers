/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <libobjc.A.dylib/TMLPointerJSExports.h>

@interface TMLPointer : NSObject <TMLPointerJSExports> {

	/*^block*/id _readBlock;
	/*^block*/id _writeBlock;

}

@property (nonatomic,copy) id readBlock;               //@synthesize readBlock=_readBlock - In the implementation block
@property (nonatomic,copy) id writeBlock;              //@synthesize writeBlock=_writeBlock - In the implementation block
@property (assign,nonatomic) id pointee; 
+(id)pointerWithReadBlock:(/*^block*/id)arg1 writeBlock:(/*^block*/id)arg2 ;
-(id)writeBlock;
-(id)readBlock;
-(void)setReadBlock:(id)arg1 ;
-(void)setWriteBlock:(id)arg1 ;
-(id)pointee;
-(void)setPointee:(id)arg1 ;
@end

