/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class CNEither, NSError;

@interface CNResult : NSObject {

	CNEither* _either;

}

@property (readonly) CNEither * either;                 //@synthesize either=_either - In the implementation block
@property (readonly) id value; 
@property (copy,readonly) NSError * error; 
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isFailure; 
+(id)resultWithFuture:(id)arg1 ;
+(id)successWithValue:(id)arg1 ;
+(id)failureWithError:(id)arg1 ;
+(id)resultWithValue:(id)arg1 orError:(id)arg2 ;
+(id)resultWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSError *)error;
-(id)value;
-(id)initWithError:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(BOOL)isSuccess;
-(id)recover:(/*^block*/id)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(BOOL)isFailure;
-(id)initWithValue:(id)arg1 error:(id)arg2 ;
-(id)valueWithError:(id*)arg1 ;
-(CNEither *)either;
@end

