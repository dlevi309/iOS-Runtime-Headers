/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSGProactiveTrigger, PPQuickTypeItem, PSGOperationalPredictedItem;

@interface PSGStructuredInfoSuggestion : NSObject <NSSecureCoding, NSCopying> {

	PSGProactiveTrigger* _proactiveTrigger;
	PPQuickTypeItem* _portraitItem;
	PSGOperationalPredictedItem* _operationalItem;

}

@property (nonatomic,readonly) PSGProactiveTrigger * proactiveTrigger;                     //@synthesize proactiveTrigger=_proactiveTrigger - In the implementation block
@property (nonatomic,readonly) PPQuickTypeItem * portraitItem;                             //@synthesize portraitItem=_portraitItem - In the implementation block
@property (nonatomic,readonly) PSGOperationalPredictedItem * operationalItem;              //@synthesize operationalItem=_operationalItem - In the implementation block
+(BOOL)supportsSecureCoding;
-(PSGProactiveTrigger *)proactiveTrigger;
-(id)predictedValue;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToItem:(id)arg1 ;
-(id)description;
-(BOOL)isApplePay;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProactiveTrigger:(id)arg1 portraitItem:(id)arg2 operationalItem:(id)arg3 ;
-(PPQuickTypeItem *)portraitItem;
-(PSGOperationalPredictedItem *)operationalItem;
@end

