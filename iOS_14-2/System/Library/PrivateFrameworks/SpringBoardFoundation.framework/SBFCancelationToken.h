/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
+(id)tokenWrappingCancelable:(id)arg1 ;
-(BOOL)isCanceled;
-(id)init;
-(id)nts_cancel;
-(void)callCancelationBlocks:(id)arg1 ;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(void)cancel;
@end

