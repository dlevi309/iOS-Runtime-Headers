/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@interface CUIDSReadRequest : NSObject {

	unsigned long long minLen;
	unsigned long long maxLen;
	char* buffer;
	unsigned long long len;
	CUIDSReadRequest* next;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

