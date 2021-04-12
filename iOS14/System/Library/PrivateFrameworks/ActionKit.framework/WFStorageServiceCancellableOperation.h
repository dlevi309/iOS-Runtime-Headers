/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)cancel;
-(BOOL)isCancelled;
-(id)initWithCancelBlock:(/*^block*/id)arg1 ;
@end

