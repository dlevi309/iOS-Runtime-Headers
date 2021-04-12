/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setSource:(int)arg1;
-(void)setName:(id)arg1;
-(int)source;
-(int)intent;
-(void)setIntent:(int)arg1;
-(BOOL)wantsBiometricPresentation;
-(void)setWantsBiometricPresentation:(BOOL)arg1;
-(BOOL)confirmedNotInPocket;
-(void)setConfirmedNotInPocket:(BOOL)arg1;

@end

