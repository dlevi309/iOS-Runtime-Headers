/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@interface CKDCancelToken : NSObject <CKDCancelling> {

	BOOL _isCancelled;
	/*^block*/id _cancelAction;

}

@property (nonatomic,copy) id cancelAction;              //@synthesize cancelAction=_cancelAction - In the implementation block
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancelAction:(id)arg1 ;
-(id)cancelAction;
@end

