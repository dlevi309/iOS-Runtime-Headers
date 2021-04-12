/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISDialog.h>

@class NSLock, SSPaymentSheet, NSString;

@interface ISTouchIDDialog : ISDialog {

	NSLock* _lock;
	BOOL _isDualAction;
	BOOL _isFree;
	SSPaymentSheet* _paymentSheet;
	NSString* _body;
	NSString* _username;

}

@property (nonatomic,copy) NSString * body;                   //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * username;               //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL isFree;                     //@synthesize isFree=_isFree - In the implementation block
@property (readonly) BOOL isDualAction;                       //@synthesize isDualAction=_isDualAction - In the implementation block
@property (copy) NSString * fallbackExplanation; 
@property (copy) NSString * fallbackMessage; 
-(void)_init;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)initWithDialogDictionary:(id)arg1 ;
-(id)paymentSheet;
-(void)_parseDialogDictionary:(id)arg1 ;
-(void)setIsFree:(BOOL)arg1 ;
-(NSString *)fallbackExplanation;
-(NSString *)fallbackMessage;
-(void)setFallbackExplanation:(NSString *)arg1 ;
-(void)setFallbackMessage:(NSString *)arg1 ;
-(id)buttonForButtonType:(long long)arg1 ;
-(BOOL)isDualAction;
-(BOOL)isFree;
@end

