/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNFutureImpl.h>

@class NSString;

@interface _CNConstantFutureImpl : NSObject <CNFutureImpl> {

	id _result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithResult:(id)arg1 ;
-(void)updateDescriptionWithBuilder:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)isFinished;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)cancel;
-(BOOL)isCancelled;
@end

