/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSUnlockRequest.h>

@class NSString;

@interface CSConcreteUnlockRequest : NSObject <CSUnlockRequest> {

	BOOL wantsBiometricPresentation;
	BOOL confirmedNotInPocket;
	int source;
	int intent;
	NSString* name;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int intent; 
@property (assign,nonatomic) BOOL wantsBiometricPresentation; 
@property (assign,nonatomic) BOOL confirmedNotInPocket; 
-(NSString *)name;
-(void)setSource:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(int)source;
-(int)intent;
-(void)setIntent:(int)arg1 ;
-(BOOL)wantsBiometricPresentation;
-(void)setWantsBiometricPresentation:(BOOL)arg1 ;
-(BOOL)confirmedNotInPocket;
-(void)setConfirmedNotInPocket:(BOOL)arg1 ;
@end

