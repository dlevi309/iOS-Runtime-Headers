/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSTimer *)expirationTimer;
-(void)setExpirationTimer:(NSTimer *)arg1 ;
@end

