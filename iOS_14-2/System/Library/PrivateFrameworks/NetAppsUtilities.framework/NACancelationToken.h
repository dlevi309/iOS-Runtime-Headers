/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <libobjc.A.dylib/NACancelable.h>

@class NSMutableArray, NSString;

@interface NACancelationToken : NSObject <NACancelable> {

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
-(void)addCancelable:(id)arg1 ;
-(id)nts_cancel;
-(void)callCancelationBlocks:(id)arg1 ;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(void)cancel;
@end

