/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
-(NSString *)servKey;
-(BOOL)clearSession;
-(void)setServKey:(NSString *)arg1 ;
-(PSCSessionInternal_Ref)sessionRef;
-(void)setSessionRef:(PSCSessionInternal_Ref)arg1 ;
-(BOOL)_prepareContextWithBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
@end

