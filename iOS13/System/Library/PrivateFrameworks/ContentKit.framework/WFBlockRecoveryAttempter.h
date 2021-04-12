/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFErrorRecoveryAttempting.h>

@class NSString;

@interface WFBlockRecoveryAttempter : NSObject <WFErrorRecoveryAttempting> {

	/*^block*/id _handlerBlock;

}

@property (nonatomic,copy) id handlerBlock;                         //@synthesize handlerBlock=_handlerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
-(id)handlerBlock;
-(void)setHandlerBlock:(id)arg1 ;
@end

