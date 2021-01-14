/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling> {

	NSMutableArray* _cancelTokens;

}

@property (nonatomic,retain) NSMutableArray * cancelTokens;              //@synthesize cancelTokens=_cancelTokens - In the implementation block
-(id)init;
-(void)cancel;
-(NSMutableArray *)cancelTokens;
-(void)setCancelTokens:(NSMutableArray *)arg1 ;
-(void)removeAllCancelTokens;
-(void)addCancelToken:(id)arg1 withOperation:(id)arg2 ;
-(void)removeCancelToken:(id)arg1 ;
@end

