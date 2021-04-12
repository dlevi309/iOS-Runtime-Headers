/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFCancelable.h>

@class NSMutableArray, NSString;

@interface SBFCancelationToken : NSObject <SBFCancelable> {

	BOOL _isCanceled;
	NSMutableArray* _cancelationBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWrappingCancelable:(id)arg1 ;
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)cancel;
-(BOOL)isCanceled;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(id)nts_cancel;
-(void)callCancelationBlocks:(id)arg1 ;
@end

