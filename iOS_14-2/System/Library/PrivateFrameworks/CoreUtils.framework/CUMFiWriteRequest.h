/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSData;

@interface CUMFiWriteRequest : NSObject {

	CUMFiWriteRequest* next;
	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;                //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
@end

