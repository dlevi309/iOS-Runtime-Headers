/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL;

@interface PPQuickTypeItem : NSObject <NSSecureCoding> {

	unsigned char _source;
	BOOL _shouldAggregate;
	unsigned char _flags;
	unsigned _fields;
	double _score;
	NSString* _sourceIdentifier;
	NSString* _label;
	NSString* _value;
	NSString* _name;
	NSDate* _date;
	NSString* _originatingBundleID;
	NSURL* _originatingWebsiteURL;
	unsigned long long _predictionAge;

}

@property (assign,nonatomic) double score;                                  //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned char source;                          //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * sourceIdentifier;                     //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned fields;                               //@synthesize fields=_fields - In the implementation block
@property (nonatomic,copy) NSString * originatingBundleID;                  //@synthesize originatingBundleID=_originatingBundleID - In the implementation block
@property (nonatomic,copy) NSURL * originatingWebsiteURL;                   //@synthesize originatingWebsiteURL=_originatingWebsiteURL - In the implementation block
@property (assign,nonatomic) unsigned long long predictionAge;              //@synthesize predictionAge=_predictionAge - In the implementation block
@property (assign,nonatomic) BOOL shouldAggregate;                          //@synthesize shouldAggregate=_shouldAggregate - In the implementation block
@property (assign,nonatomic) unsigned char flags;                           //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)quickTypeItemWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(BOOL)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setPredictionAge:(unsigned long long)arg1 ;
-(BOOL)shouldAggregate;
-(long long)compare:(id)arg1 ;
-(void)setFields:(unsigned)arg1 ;
-(unsigned)fields;
-(double)score;
-(unsigned char)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(void)setShouldAggregate:(BOOL)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSource:(unsigned char)arg1 ;
-(NSString *)originatingBundleID;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(BOOL)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13 ;
-(id)description;
-(void)setOriginatingWebsiteURL:(NSURL *)arg1 ;
-(void)setFlags:(unsigned char)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToQuickTypeItem:(id)arg1 ;
-(BOOL)hasScoreSimilarToItem:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)reverseCompare:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSDate *)date;
-(NSURL *)originatingWebsiteURL;
-(unsigned long long)predictionAge;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)source;
-(NSString *)sourceIdentifier;
@end

