/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFFileStorageServiceOperation.h>

@class NSString;

@interface WFStorageServiceCancellableOperation : NSObject <WFFileStorageServiceOperation> {

	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id cancelBlock;                                     //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(id)initWithCancelBlock:(/*^block*/id)arg1 ;
@end

