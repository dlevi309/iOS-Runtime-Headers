/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <Foundation/NSOperation.h>

@interface ASKLoadResourceOperation : NSOperation {

	/*^block*/id _outputBlock;
	long long __loadReason;

}

@property (assign,setter=_setLoadReason:,nonatomic) long long _loadReason;              //@synthesize _loadReason=__loadReason - In the implementation block
@property (copy) id outputBlock;                                                        //@synthesize outputBlock=_outputBlock - In the implementation block
-(void)main;
-(long long)_loadReason;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(void)_setLoadReason:(long long)arg1 ;
-(void)didCompleteWithResource:(id)arg1 error:(id)arg2 ;
@end

