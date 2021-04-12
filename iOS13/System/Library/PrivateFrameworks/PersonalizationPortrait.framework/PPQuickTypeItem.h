/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(unsigned char)arg1 ;
-(NSDate *)date;
-(void)setName:(NSString *)arg1 ;
-(unsigned char)flags;
-(unsigned char)source;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(unsigned)fields;
-(double)score;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setScore:(double)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setFlags:(unsigned char)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(void)setFields:(unsigned)arg1 ;
-(NSString *)originatingBundleID;
-(void)setOriginatingBundleID:(NSString *)arg1 ;
-(long long)reverseCompare:(id)arg1 ;
-(NSURL *)originatingWebsiteURL;
-(void)setOriginatingWebsiteURL:(NSURL *)arg1 ;
-(BOOL)shouldAggregate;
-(void)setShouldAggregate:(BOOL)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(BOOL)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13 ;
-(BOOL)hasScoreSimilarToItem:(id)arg1 ;
-(BOOL)isEqualToQuickTypeItem:(id)arg1 ;
-(unsigned long long)predictionAge;
-(void)setPredictionAge:(unsigned long long)arg1 ;
@end

