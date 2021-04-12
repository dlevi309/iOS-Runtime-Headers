/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


#import <CoreBluetooth/CoreBluetooth-Structs.h>
@class NSError, NSArray;

@interface CBWriteRequest : NSObject {

	NSError* _error;
	iovec* _iov[16];
	iovec* _iop;
	int _ion;
	unsigned long long _offset;
	BOOL _endOfData;
	/*^block*/id _completion;
	NSArray* _dataArray;

}

@property (nonatomic,copy) id completion;                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSArray * dataArray;              //@synthesize dataArray=_dataArray - In the implementation block
@property (assign,nonatomic) BOOL endOfData;                   //@synthesize endOfData=_endOfData - In the implementation block
@property (nonatomic,readonly) NSError * error;                //@synthesize error=_error - In the implementation block
-(NSArray *)dataArray;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSError *)error;
-(BOOL)endOfData;
-(void)setEndOfData:(BOOL)arg1 ;
-(void)setDataArray:(NSArray *)arg1 ;
@end

