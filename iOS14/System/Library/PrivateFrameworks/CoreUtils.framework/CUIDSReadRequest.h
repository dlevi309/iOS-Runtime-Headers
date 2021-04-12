/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

