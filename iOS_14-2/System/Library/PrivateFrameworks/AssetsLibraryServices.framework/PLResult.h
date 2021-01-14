/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)successWithResult:(id)arg1 ;
+(id)failureWithError:(id)arg1 ;
-(id)resultWithError:(id*)arg1 ;
-(BOOL)isSuccess;
-(BOOL)isFailure;
-(NSError *)error;
-(id)description;
-(id)result;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
@end

