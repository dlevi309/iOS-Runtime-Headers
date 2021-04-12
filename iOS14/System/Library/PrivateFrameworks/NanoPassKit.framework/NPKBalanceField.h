/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKBalanceField.h>
@class NSString, PKPaymentBalance;


@protocol NPKBalanceField <NPKPassItemField>
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

@property (nonatomic,readonly) NSString * formattedValue;                 //@synthesize formattedValue=_formattedValue - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryBalance;                     //@synthesize isPrimaryBalance=_isPrimaryBalance - In the implementation block
@property (nonatomic,readonly) PKPaymentBalance * balance;                //@synthesize balance=_balance - In the implementation block
@property (nonatomic,readonly) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * detailLabel; 
@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKPaymentPassAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentBalance *)balance;
-(PKPaymentPassAction *)action;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)detailLabel;
-(NSString *)formattedValue;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPendingUpdate;
-(BOOL)isPrimaryBalance;
-(id)initWithBalance:(id)arg1 label:(id)arg2 formattedValue:(id)arg3 identifier:(id)arg4 primaryBalance:(BOOL)arg5 action:(id)arg6 pendingUpdateExpireDate:(id)arg7 ;
@end

