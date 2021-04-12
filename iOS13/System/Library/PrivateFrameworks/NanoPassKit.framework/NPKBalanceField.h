/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKBalanceField.h>
@class NSString, PKPaymentBalance;


@protocol NPKBalanceField <NPKTransitItemField>
@property (nonatomic,readonly) NSString * formattedValue; 
@property (nonatomic,readonly) BOOL isPrimaryBalance; 
@property (nonatomic,readonly) PKPaymentBalance * balance; 
@required
-(PKPaymentBalance *)balance;
-(NSString *)formattedValue;
-(BOOL)isPrimaryBalance;

@end


@class NSString, PKPaymentBalance, NSDate, PKPaymentPassAction;

@interface NPKBalanceField : NSObject <NPKBalanceField> {

	NSDate* _pendingUpdateExpireDate;
	BOOL _isPrimaryBalance;
	NSString* _label;
	NSString* detailLabel;
	NSString* _formattedValue;
	NSString* _identifier;
	PKPaymentPassAction* _action;
	PKPaymentBalance* _balance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * detailLabel; 
@property (nonatomic,readonly) NSString * formattedValue; 
@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKPaymentPassAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingUpdate; 
@property (nonatomic,readonly) BOOL isPrimaryBalance;                     //@synthesize isPrimaryBalance=_isPrimaryBalance - In the implementation block
@property (nonatomic,readonly) PKPaymentBalance * balance;                //@synthesize balance=_balance - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)identifier;
-(PKPaymentPassAction *)action;
-(NSString *)label;
-(NSString *)detailLabel;
-(PKPaymentBalance *)balance;
-(NSString *)formattedValue;
-(id)initWithBalance:(id)arg1 label:(id)arg2 formattedValue:(id)arg3 identifier:(id)arg4 primaryBalance:(BOOL)arg5 action:(id)arg6 pendingUpdateExpireDate:(id)arg7 ;
-(BOOL)hasPendingUpdate;
-(BOOL)isPrimaryBalance;
@end

