/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isCanceled;
-(void)addCancelable:(id)arg1 ;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)removeAllCancelationBlocks;
@end

