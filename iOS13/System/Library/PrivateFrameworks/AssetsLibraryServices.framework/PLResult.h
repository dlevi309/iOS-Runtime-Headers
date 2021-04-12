/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSError;

@interface PLResult : NSObject {

	id _result;
	NSError* _error;

}

@property (readonly) id result;                         //@synthesize result=_result - In the implementation block
@property (copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isFailure; 
+(id)failureWithError:(id)arg1 ;
+(id)successWithResult:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(id)result;
-(id)resultWithError:(id*)arg1 ;
-(BOOL)isSuccess;
-(BOOL)isFailure;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
@end

