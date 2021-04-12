/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSString, NSArray, NSDictionary;

@interface MTTreatmentAction : NSObject {

	BOOL _blacklisted;
	NSString* _field;
	NSString* _sourceField;
	id _overrideFieldValue;
	NSArray* _blacklistedFields;
	NSArray* _whitelistedFields;
	NSDictionary* _fieldsMap;
	NSArray* _dstKeyPath;
	NSArray* _srcKeyPath;

}

@property (nonatomic,retain) NSString * field;                         //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) NSString * sourceField;                   //@synthesize sourceField=_sourceField - In the implementation block
@property (nonatomic,retain) id overrideFieldValue;                    //@synthesize overrideFieldValue=_overrideFieldValue - In the implementation block
@property (assign,nonatomic) BOOL blacklisted;                         //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,retain) NSArray * blacklistedFields;              //@synthesize blacklistedFields=_blacklistedFields - In the implementation block
@property (nonatomic,retain) NSArray * whitelistedFields;              //@synthesize whitelistedFields=_whitelistedFields - In the implementation block
@property (nonatomic,retain) NSDictionary * fieldsMap;                 //@synthesize fieldsMap=_fieldsMap - In the implementation block
@property (nonatomic,retain) NSArray * dstKeyPath;                     //@synthesize dstKeyPath=_dstKeyPath - In the implementation block
@property (nonatomic,retain) NSArray * srcKeyPath;                     //@synthesize srcKeyPath=_srcKeyPath - In the implementation block
+(id)treatmentActionWithField:(id)arg1 configData:(id)arg2 ;
-(NSDictionary *)fieldsMap;
-(NSString *)field;
-(void)performActionWithContext:(id)arg1 ;
-(void)setField:(NSString *)arg1 ;
-(void)setBlacklisted:(BOOL)arg1 ;
-(NSArray *)whitelistedFields;
-(void)setWhitelistedFields:(NSArray *)arg1 ;
-(BOOL)blacklisted;
-(id)initWithField:(id)arg1 configDictionary:(id)arg2 ;
-(void)setSourceField:(NSString *)arg1 ;
-(void)setOverrideFieldValue:(id)arg1 ;
-(void)setBlacklistedFields:(NSArray *)arg1 ;
-(void)setFieldsMap:(NSDictionary *)arg1 ;
-(void)computeKeyPaths;
-(NSString *)sourceField;
-(id)performAction:(id)arg1 atKeyIndex:(long long)arg2 context:(id)arg3 ;
-(id)overrideFieldValue;
-(NSArray *)blacklistedFields;
-(NSArray *)srcKeyPath;
-(id)performAction:(id)arg1 context:(id)arg2 ;
-(NSArray *)dstKeyPath;
-(void)setDstKeyPath:(NSArray *)arg1 ;
-(void)setSrcKeyPath:(NSArray *)arg1 ;
@end

