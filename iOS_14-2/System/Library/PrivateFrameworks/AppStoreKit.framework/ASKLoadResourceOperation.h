/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <Foundation/NSOperation.h>

@interface ASKLoadResourceOperation : NSOperation {

	/*^block*/id _outputBlock;
	long long __loadReason;

}

@property (assign,setter=_setLoadReason:,nonatomic) long long _loadReason;              //@synthesize _loadReason=__loadReason - In the implementation block
@property (copy) id outputBlock;                                                        //@synthesize outputBlock=_outputBlock - In the implementation block
-(void)setOutputBlock:(id)arg1 ;
-(void)didCompleteWithResource:(id)arg1 error:(id)arg2 ;
-(void)main;
-(long long)_loadReason;
-(id)outputBlock;
-(void)_setLoadReason:(long long)arg1 ;
@end

