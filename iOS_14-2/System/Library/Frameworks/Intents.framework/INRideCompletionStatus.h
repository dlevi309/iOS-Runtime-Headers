/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INRideCompletionStatusExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUserActivity, INCurrencyAmount, NSSet, NSString;

@interface INRideCompletionStatus : NSObject <INCacheableContainer, INRideCompletionStatusExport, NSCopying, NSSecureCoding> {

	BOOL _completed;
	BOOL _missedPickup;
	BOOL _outstanding;
	BOOL _canceledByService;
	NSUserActivity* _completionUserActivity;
	INCurrencyAmount* _paymentAmount;
	unsigned long long _feedbackType;
	NSSet* _defaultTippingOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceledByService,nonatomic,readonly) BOOL canceledByService;              //@synthesize canceledByService=_canceledByService - In the implementation block
@property (nonatomic,retain) NSUserActivity * completionUserActivity;                          //@synthesize completionUserActivity=_completionUserActivity - In the implementation block
@property (getter=isCompleted,nonatomic,readonly) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (getter=isMissedPickup,nonatomic,readonly) BOOL missedPickup;                        //@synthesize missedPickup=_missedPickup - In the implementation block
@property (nonatomic,readonly) INCurrencyAmount * paymentAmount;                               //@synthesize paymentAmount=_paymentAmount - In the implementation block
@property (nonatomic,readonly) unsigned long long feedbackType;                                //@synthesize feedbackType=_feedbackType - In the implementation block
@property (getter=isOutstanding,nonatomic,readonly) BOOL outstanding;                          //@synthesize outstanding=_outstanding - In the implementation block
@property (nonatomic,retain) NSSet * defaultTippingOptions;                                    //@synthesize defaultTippingOptions=_defaultTippingOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)completed;
+(id)canceledByUser;
+(id)completedWithSettledPaymentAmount:(id)arg1 ;
+(id)completedWithOutstandingPaymentAmount:(id)arg1 ;
+(id)canceledMissedPickup;
+(id)completedWithOutstandingFeedbackType:(unsigned long long)arg1 ;
+(id)canceledByService;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(BOOL)isCanceled;
-(void)encodeWithCoder:(id)arg1 ;
-(INCurrencyAmount *)paymentAmount;
-(id)_dictionaryRepresentation;
-(BOOL)isMissedPickup;
-(BOOL)isOutstanding;
-(BOOL)isCanceledByService;
-(id)_initCompleted:(BOOL)arg1 canceledByService:(BOOL)arg2 missedPickup:(BOOL)arg3 amount:(id)arg4 feedbackType:(unsigned long long)arg5 outstanding:(BOOL)arg6 ;
-(id)_initWithValue:(id)arg1 ;
-(NSString *)description;
-(BOOL)isCompleted;
-(id)_newValue;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)feedbackType;
-(NSUserActivity *)completionUserActivity;
-(void)setCompletionUserActivity:(NSUserActivity *)arg1 ;
-(NSSet *)defaultTippingOptions;
-(void)setDefaultTippingOptions:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

