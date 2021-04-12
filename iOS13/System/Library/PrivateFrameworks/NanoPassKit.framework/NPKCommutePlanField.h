/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKCommutePlanField.h>

@protocol NPKCommutePlanField <NPKTransitItemField>
@property (nonatomic,readonly) id<NPKDateRange> usageDateRange; 
@required
-(id<NPKDateRange>)usageDateRange;

@end


@protocol NPKDateRange;
@class NSString, PKPaymentPassAction;

@interface NPKCommutePlanField : NSObject <NPKCommutePlanField> {

	NSString* _label;
	NSString* _detailLabel;
	NSString* _formattedValue;
	NSString* _identifier;
	PKPaymentPassAction* _action;
	id<NPKDateRange> _usageDateRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * detailLabel;                       //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) NSString * formattedValue;                    //@synthesize formattedValue=_formattedValue - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKPaymentPassAction * action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingUpdate; 
@property (nonatomic,readonly) id<NPKDateRange> usageDateRange;              //@synthesize usageDateRange=_usageDateRange - In the implementation block
-(NSString *)description;
-(NSString *)identifier;
-(PKPaymentPassAction *)action;
-(NSString *)label;
-(NSString *)detailLabel;
-(NSString *)formattedValue;
-(id)initWithLabel:(id)arg1 detailLabel:(id)arg2 formattedValue:(id)arg3 usageDateRange:(id)arg4 identifier:(id)arg5 action:(id)arg6 ;
-(BOOL)hasPendingUpdate;
-(id<NPKDateRange>)usageDateRange;
@end

