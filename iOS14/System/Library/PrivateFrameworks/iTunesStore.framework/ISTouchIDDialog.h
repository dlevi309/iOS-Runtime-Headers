/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)initWithDialogDictionary:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)paymentSheet;
-(NSString *)username;
-(BOOL)isFree;
-(void)setFallbackMessage:(NSString *)arg1 ;
-(NSString *)fallbackMessage;
-(BOOL)isDualAction;
-(void)_init;
-(void)_parseDialogDictionary:(id)arg1 ;
-(void)setIsFree:(BOOL)arg1 ;
-(NSString *)fallbackExplanation;
-(void)setFallbackExplanation:(NSString *)arg1 ;
-(id)buttonForButtonType:(long long)arg1 ;
@end

