/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKCommutePlanField.h>
@class NSString, NSArray;


@protocol NPKCommutePlanField <NPKPassItemField>
@property (nonatomic,readonly) NSString * detailLabel; 
@property (nonatomic,readonly) id<NPKDateRange> usageDateRange; 
@property (nonatomic,readonly) BOOL isCountBasedCommutePlan; 
@property (nonatomic,readonly) NSArray * details; 
@required
-(NSArray *)details;
-(NSString *)detailLabel;
-(id<NPKDateRange>)usageDateRange;
-(BOOL)isCountBasedCommutePlan;

@end


@protocol NPKDateRange;
@class NSString, NSArray, PKPaymentPassAction;

@interface NPKCommutePlanField : NSObject <NPKCommutePlanField> {

	NSString* _label;
	NSString* _detailLabel;
	NSString* _formattedValue;
	NSString* _identifier;
	NSArray* _details;
	PKPaymentPassAction* _action;
	id<NPKDateRange> _usageDateRange;

}

@property (nonatomic,readonly) NSString * detailLabel;                       //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) id<NPKDateRange> usageDateRange;              //@synthesize usageDateRange=_usageDateRange - In the implementation block
@property (nonatomic,readonly) BOOL isCountBasedCommutePlan; 
@property (nonatomic,readonly) NSArray * details;                            //@synthesize details=_details - In the implementation block
@property (nonatomic,readonly) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * formattedValue;                    //@synthesize formattedValue=_formattedValue - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKPaymentPassAction * action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentPassAction *)action;
-(NSString *)description;
-(NSArray *)details;
-(NSString *)identifier;
-(NSString *)detailLabel;
-(NSString *)formattedValue;
-(NSString *)label;
-(BOOL)hasPendingUpdate;
-(id<NPKDateRange>)usageDateRange;
-(BOOL)isCountBasedCommutePlan;
-(id)initWithLabel:(id)arg1 detailLabel:(id)arg2 formattedValue:(id)arg3 usageDateRange:(id)arg4 identifier:(id)arg5 details:(id)arg6 action:(id)arg7 ;
@end

