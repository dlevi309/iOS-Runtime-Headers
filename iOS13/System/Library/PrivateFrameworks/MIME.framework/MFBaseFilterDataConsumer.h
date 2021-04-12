/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <libobjc.A.dylib/MFDataConsumer.h>

@class NSMutableArray, NSArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {

	NSMutableArray* _consumers;
	BOOL _serialAppend;

}

@property (assign,getter=isSerialAppend,nonatomic) BOOL serialAppend;              //@synthesize serialAppend=_serialAppend - In the implementation block
@property (nonatomic,readonly) NSArray * consumers;                                //@synthesize consumers=_consumers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filterWithConsumer:(id)arg1 ;
+(id)filterWithConsumers:(id)arg1 ;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(id)initWithConsumer:(id)arg1 ;
-(id)initWithConsumers:(id)arg1 ;
-(BOOL)isSerialAppend;
-(void)setSerialAppend:(BOOL)arg1 ;
-(NSArray *)consumers;
@end

