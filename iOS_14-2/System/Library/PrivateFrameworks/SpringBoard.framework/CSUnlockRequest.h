/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol CSUnlockRequest <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int intent; 
@property (assign,nonatomic) BOOL wantsBiometricPresentation; 
@property (assign,nonatomic) BOOL confirmedNotInPocket; 
@required
-(int)intent;
-(void)setIntent:(int)arg1;
-(BOOL)wantsBiometricPresentation;
-(void)setWantsBiometricPresentation:(BOOL)arg1;
-(BOOL)confirmedNotInPocket;
-(void)setConfirmedNotInPocket:(BOOL)arg1;
-(void)setSource:(int)arg1;
-(NSString *)name;
-(void)setName:(id)arg1;
-(int)source;

@end

