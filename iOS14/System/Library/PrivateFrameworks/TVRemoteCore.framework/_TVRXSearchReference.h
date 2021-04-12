/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString, NSTimer;

@interface _TVRXSearchReference : NSObject {

	NSString* _identifier;
	id _completionBlock;
	NSTimer* _expirationTimer;

}

@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id completionBlock;                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * expirationTimer;              //@synthesize expirationTimer=_expirationTimer - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setExpirationTimer:(NSTimer *)arg1 ;
-(NSTimer *)expirationTimer;
@end

