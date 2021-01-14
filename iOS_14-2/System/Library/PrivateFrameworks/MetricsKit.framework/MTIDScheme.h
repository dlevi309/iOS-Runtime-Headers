/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MTIDScheme : NSObject <NSSecureCoding> {

	BOOL _isDefault;
	NSString* _idNamespace;
	long long _idType;
	long long _rotationSchedule;
	long long _lifespan;
	NSArray* _correlations;
	NSString* _version;
	NSString* _containerIdentifier;
	unsigned long long _localHash;
	unsigned long long _correlationHash;
	NSArray* _topics;

}

@property (nonatomic,copy) NSString * idNamespace;                            //@synthesize idNamespace=_idNamespace - In the implementation block
@property (assign,nonatomic) long long idType;                                //@synthesize idType=_idType - In the implementation block
@property (assign,nonatomic) long long rotationSchedule;                      //@synthesize rotationSchedule=_rotationSchedule - In the implementation block
@property (assign,nonatomic) long long lifespan;                              //@synthesize lifespan=_lifespan - In the implementation block
@property (nonatomic,copy) NSArray * correlations;                            //@synthesize correlations=_correlations - In the implementation block
@property (nonatomic,copy) NSString * version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                    //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long localHash;                    //@synthesize localHash=_localHash - In the implementation block
@property (assign,nonatomic) unsigned long long correlationHash;              //@synthesize correlationHash=_correlationHash - In the implementation block
@property (nonatomic,copy) NSArray * topics;                                  //@synthesize topics=_topics - In the implementation block
@property (assign,nonatomic) BOOL isDefault;                                  //@synthesize isDefault=_isDefault - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localCalendar;
+(id)referenceDateComponents;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)idType;
-(NSString *)containerIdentifier;
-(NSArray *)topics;
-(void)setTopics:(NSArray *)arg1 ;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)description;
-(BOOL)isDefault;
-(void)setIsDefault:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdType:(long long)arg1 ;
-(NSArray *)correlations;
-(void)setCorrelations:(NSArray *)arg1 ;
-(unsigned long long)calculateHash;
-(id)secretKeyForDate:(id)arg1 ;
-(id)rollingEndDateForDate:(id)arg1 ;
-(void)setIdNamespace:(NSString *)arg1 ;
-(void)setRotationSchedule:(long long)arg1 ;
-(void)setLifespan:(long long)arg1 ;
-(void)overrideLifespanMaybe;
-(void)setLocalHash:(unsigned long long)arg1 ;
-(NSString *)idNamespace;
-(long long)rotationSchedule;
-(long long)lifespan;
-(long long)timeBucketForDate:(id)arg1 ;
-(unsigned long long)localHash;
-(unsigned long long)correlationHash;
-(void)setCorrelationHash:(unsigned long long)arg1 ;
-(id)initWithNamespace:(id)arg1 options:(id)arg2 ;
-(id)initWithNamespace:(id)arg1 type:(long long)arg2 ;
-(id)rollingStartDateForDate:(id)arg1 ;
-(id)rotatedSecretNameForDate:(id)arg1 maxCount:(long long)arg2 ;
@end

