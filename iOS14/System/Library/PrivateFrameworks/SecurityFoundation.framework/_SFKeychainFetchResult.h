/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithError:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(long long)resultType;
-(NSError *)error;
-(id)value;
-(void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

