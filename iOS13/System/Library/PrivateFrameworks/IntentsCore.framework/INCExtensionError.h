/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(NSError *)underlyingError;
-(id)initWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
@end

