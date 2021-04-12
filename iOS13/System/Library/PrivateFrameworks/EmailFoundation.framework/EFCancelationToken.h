/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EFInvocationToken.h>
#import <libobjc.A.dylib/EFCancelable.h>

@class NSString;

@interface EFCancelationToken : EFInvocationToken <EFCancelable>

@property (getter=isCanceled,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_descriptionString;
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
+(id)tokenWithLabel:(id)arg1 cancelationBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(BOOL)isCanceled;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(void)addCancelable:(id)arg1 ;
-(void)removeAllCancelationBlocks;
@end

