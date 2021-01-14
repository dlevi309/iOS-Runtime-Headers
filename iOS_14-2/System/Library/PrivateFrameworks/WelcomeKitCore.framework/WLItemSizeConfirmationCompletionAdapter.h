/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@interface WLItemSizeConfirmationCompletionAdapter : NSObject {

	/*^block*/id _segmentCompletion;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) id segmentCompletion;              //@synthesize segmentCompletion=_segmentCompletion - In the implementation block
@property (nonatomic,readonly) id completion;                     //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(id)initWithUnconfirmedItemSize:(unsigned long long)arg1 segmentSize:(unsigned long long)arg2 originalSegmentCompletion:(/*^block*/id)arg3 originalCompletion:(/*^block*/id)arg4 ;
-(id)segmentCompletion;
@end

