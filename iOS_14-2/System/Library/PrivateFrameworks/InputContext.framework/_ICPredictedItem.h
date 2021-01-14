/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <InputContext/InputContext-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _ICProactiveTrigger, NSDate, NSURL, NSDictionary;

@interface _ICPredictedItem : NSObject <NSSecureCoding, NSCopying> {

	unsigned char _itemType;
	BOOL _shouldAggregate;
	unsigned char _flags;
	unsigned char _layoutHint;
	NSString* _identifier;
	_ICProactiveTrigger* _trigger;
	NSString* _label;
	NSString* _value;
	NSString* _name;
	NSDate* _date;
	NSString* _originatingBundleID;
	NSURL* _originatingWebsiteURL;
	unsigned long long _predictionAge;
	double _score;
	NSString* _targetBundleID;
	NSDictionary* _operationData;

}

@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) _ICProactiveTrigger * trigger;               //@synthesize trigger=_trigger - In the implementation block
@property (assign,nonatomic) unsigned char itemType;                        //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * value;                            //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * originatingBundleID;              //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (nonatomic,readonly) NSURL * originatingWebsiteURL;               //@synthesize originatingWebsiteURL=_originatingWebsiteURL - In the implementation block
@property (assign,nonatomic) unsigned long long predictionAge;              //@synthesize predictionAge=_predictionAge - In the implementation block
@property (nonatomic,readonly) BOOL shouldAggregate;                        //@synthesize shouldAggregate=_shouldAggregate - In the implementation block
@property (assign,nonatomic) unsigned char flags;                           //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned char layoutHint;                      //@synthesize layoutHint=_layoutHint - In the implementation block
@property (nonatomic,readonly) double score;                                //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSString * targetBundleID;                   //@synthesize targetBundleID=_targetBundleID - In the implementation block
@property (nonatomic,readonly) NSDictionary * operationData;                //@synthesize operationData=_operationData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictedItemFromQuickTypeItem:(id)arg1 trigger:(id)arg2 ;
-(void)setPredictionAge:(unsigned long long)arg1 ;
-(BOOL)shouldAggregate;
-(_ICProactiveTrigger *)trigger;
-(double)score;
-(NSString *)targetBundleID;
-(unsigned char)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setItemType:(unsigned char)arg1 ;
-(NSString *)originatingBundleID;
-(NSString *)name;
-(id)description;
-(unsigned char)itemType;
-(void)setFlags:(unsigned char)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasScoreSimilarToItem:(id)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(NSURL *)originatingWebsiteURL;
-(unsigned long long)predictionAge;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)operationData;
-(unsigned char)layoutHint;
-(id)initWithIdentifier:(id)arg1 itemType:(unsigned char)arg2 score:(double)arg3 value:(id)arg4 label:(id)arg5 name:(id)arg6 date:(id)arg7 originatingBundleID:(id)arg8 originatingWebsiteURL:(id)arg9 predictionAge:(unsigned long long)arg10 shouldAggregate:(BOOL)arg11 flags:(unsigned char)arg12 targetBundleID:(id)arg13 operationData:(id)arg14 proactiveTrigger:(id)arg15 ;
-(BOOL)isEqualToPredictedItem:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 score:(double)arg2 value:(id)arg3 label:(id)arg4 name:(id)arg5 date:(id)arg6 originatingBundleID:(id)arg7 originatingWebsiteURL:(id)arg8 predictionAge:(unsigned long long)arg9 shouldAggregate:(BOOL)arg10 flags:(unsigned char)arg11 proactiveTrigger:(id)arg12 ;
-(void)setLayoutHint:(unsigned char)arg1 ;
@end

