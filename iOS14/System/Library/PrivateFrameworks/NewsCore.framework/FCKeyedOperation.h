/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>

@protocol FCOperationCanceling;
@class NSString;

@interface FCKeyedOperation : NSObject <FCOperationCanceling> {

	BOOL _cancelled;
	id<FCOperationCanceling> _cancelHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)executeForQueue:(id)arg1 delegate:(id)arg2 key:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancel;
@end

