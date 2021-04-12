/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class NSMutableArray;

@interface MFDataHolder : NSObject {

	NSMutableArray* _datas;
	unsigned long long _length;

}

@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
+(id)dataHolderWithData:(id)arg1 ;
+(id)dataHolder;
-(id)init;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)addData:(id)arg1 ;
-(unsigned long long)numberOfNewlinesNeedingConversion:(BOOL)arg1 ;
-(void)enumerateConvertingNewlinesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDatasUsingBlock:(/*^block*/id)arg1 ;
@end

