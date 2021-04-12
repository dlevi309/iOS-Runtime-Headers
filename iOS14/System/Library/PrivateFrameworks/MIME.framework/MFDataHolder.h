/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)numberOfNewlinesNeedingConversion:(BOOL)arg1 ;
-(void)enumerateConvertingNewlinesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(void)addData:(id)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDatasUsingBlock:(/*^block*/id)arg1 ;
@end

