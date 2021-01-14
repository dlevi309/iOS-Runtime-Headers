/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


@class NSError;

@interface INCExtensionError : NSObject {

	long long _errorCode;
	NSError* _underlyingError;

}

@property (assign,nonatomic) long long errorCode;                  //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSError * underlyingError;              //@synthesize underlyingError=_underlyingError - In the implementation block
-(void)setUnderlyingError:(NSError *)arg1 ;
-(NSError *)underlyingError;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)initWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
@end

