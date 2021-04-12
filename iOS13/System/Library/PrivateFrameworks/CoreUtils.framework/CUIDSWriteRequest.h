/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSData;

@interface CUIDSWriteRequest : NSObject {

	const char* writeBase;
	const char* writePtr;
	const char* writeEnd;
	CUIDSWriteRequest* next;
	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;                //@synthesize completion=_completion - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

