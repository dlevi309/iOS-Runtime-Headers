/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


@class NSError;

@interface _SFKeychainFetchResult : NSObject {

	id _keychainFetchResultInternal;

}

@property (readonly) long long resultType; 
@property (readonly) id value; 
@property (readonly) NSError * error; 
+(id)fetchResultWithValue:(id)arg1 ;
+(id)fetchResultWithError:(id)arg1 ;
-(NSError *)error;
-(id)value;
-(long long)resultType;
-(id)initWithError:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

