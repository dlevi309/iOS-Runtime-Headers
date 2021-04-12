/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSString;

@interface AMSAbsintheSession : NSObject {

	PSCSessionInternal_Ref _sessionRef;
	NSString* _servKey;

}

@property (assign,nonatomic) PSCSessionInternal_Ref sessionRef;              //@synthesize sessionRef=_sessionRef - In the implementation block
@property (nonatomic,retain) NSString * servKey;                             //@synthesize servKey=_servKey - In the implementation block
+(id)defaultSession;
-(id)init;
-(NSString *)servKey;
-(BOOL)clearSession;
-(PSCSessionInternal_Ref)sessionRef;
-(BOOL)verifyData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
-(void)setServKey:(NSString *)arg1 ;
-(void)setSessionRef:(PSCSessionInternal_Ref)arg1 ;
-(BOOL)_prepareContextWithBag:(id)arg1 error:(id*)arg2 ;
-(id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
@end

