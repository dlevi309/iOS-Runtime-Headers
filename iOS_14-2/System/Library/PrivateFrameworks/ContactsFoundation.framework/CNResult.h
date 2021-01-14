/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)successWithValue:(id)arg1 ;
+(id)failureWithError:(id)arg1 ;
+(id)resultWithFuture:(id)arg1 ;
+(id)resultWithValue:(id)arg1 orError:(id)arg2 ;
+(id)resultWithBlock:(/*^block*/id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(BOOL)isSuccess;
-(CNEither *)either;
-(id)valueWithError:(id*)arg1 ;
-(id)initWithValue:(id)arg1 error:(id)arg2 ;
-(id)initWithValue:(id)arg1 ;
-(BOOL)isFailure;
-(id)flatMap:(/*^block*/id)arg1 ;
-(NSError *)error;
-(id)description;
-(unsigned long long)hash;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

