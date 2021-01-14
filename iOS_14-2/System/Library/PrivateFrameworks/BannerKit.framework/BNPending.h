/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

@class NSString, NSSet;


@protocol BNPending <NSObject>
@property (nonatomic,copy) NSString * penderIdentifier; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,copy,readonly) NSSet * activeSuspensionReasons; 
@required
-(BOOL)isSuspended;
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2;
-(NSSet *)activeSuspensionReasons;
-(id)peekPresentable;
-(NSString *)penderIdentifier;
-(id)pullPresentablesWithIdentification:(id)arg1;
-(void)setPenderIdentifier:(id)arg1;
-(void)enqueuePresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3;

@end

