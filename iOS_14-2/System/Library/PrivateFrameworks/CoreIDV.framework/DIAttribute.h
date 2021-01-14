/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopying;
@class NSString, NSData;

@interface DIAttribute : NSObject <NSSecureCoding> {

	id<NSObject><NSCopying> _currentValue;
	BOOL _optional;
	BOOL _incorrect;
	BOOL _isSensitive;
	BOOL _holdLocally;
	BOOL _notForVerification;
	BOOL _dataNodeProof;
	BOOL _hasLabel;
	id<NSObject><NSCopying> _defaultValue;
	NSString* _identifier;
	unsigned long long _attributeType;
	NSString* _displayFormat;
	NSString* _localizedDisplayName;
	NSString* _localizedPlaceholder;
	NSString* _submissionKey;
	NSString* _reason;
	NSString* _submissionFormat;
	NSString* _group;
	NSString* _dataNodeProofGroup;
	NSData* _submissionValue;
	NSString* _clientValidationRegex;
	NSString* _codeOnError;
	NSString* _serverValidationURL;
	NSString* _supportingData;

}

@property (nonatomic,copy) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                                       //@synthesize attributeType=_attributeType - In the implementation block
@property (nonatomic,copy) NSString * displayFormat;                                                 //@synthesize displayFormat=_displayFormat - In the implementation block
@property (nonatomic,copy) NSString * localizedDisplayName;                                          //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy) NSString * localizedPlaceholder;                                          //@synthesize localizedPlaceholder=_localizedPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * submissionKey;                                                 //@synthesize submissionKey=_submissionKey - In the implementation block
@property (nonatomic,copy) NSString * submissionFormat;                                              //@synthesize submissionFormat=_submissionFormat - In the implementation block
@property (assign,nonatomic) BOOL optional;                                                          //@synthesize optional=_optional - In the implementation block
@property (assign,nonatomic) BOOL incorrect;                                                         //@synthesize incorrect=_incorrect - In the implementation block
@property (assign,nonatomic) BOOL isSensitive;                                                       //@synthesize isSensitive=_isSensitive - In the implementation block
@property (assign,nonatomic) BOOL holdLocally;                                                       //@synthesize holdLocally=_holdLocally - In the implementation block
@property (assign,nonatomic) BOOL notForVerification;                                                //@synthesize notForVerification=_notForVerification - In the implementation block
@property (assign,nonatomic) BOOL dataNodeProof;                                                     //@synthesize dataNodeProof=_dataNodeProof - In the implementation block
@property (nonatomic,copy) NSString * group;                                                         //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * dataNodeProofGroup;                                            //@synthesize dataNodeProofGroup=_dataNodeProofGroup - In the implementation block
@property (nonatomic,copy) NSData * submissionValue;                                                 //@synthesize submissionValue=_submissionValue - In the implementation block
@property (nonatomic,copy) NSString * clientValidationRegex;                                         //@synthesize clientValidationRegex=_clientValidationRegex - In the implementation block
@property (nonatomic,copy) NSString * codeOnError;                                                   //@synthesize codeOnError=_codeOnError - In the implementation block
@property (nonatomic,copy) NSString * serverValidationURL;                                           //@synthesize serverValidationURL=_serverValidationURL - In the implementation block
@property (assign,nonatomic) BOOL hasLabel;                                                          //@synthesize hasLabel=_hasLabel - In the implementation block
@property (nonatomic,copy) NSString * supportingData;                                                //@synthesize supportingData=_supportingData - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> defaultValue;                                     //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) NSString * reason;                                                    //@synthesize reason=_reason - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) id<NSObject><NSCopying> currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(BOOL)isSensitive;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
-(void)setDefaultValue:(id<NSObject><NSCopying>)arg1 ;
-(unsigned long long)attributeType;
-(id)init;
-(BOOL)hasLabel;
-(id<NSObject><NSCopying>)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedDisplayName;
-(NSString *)reason;
-(void)setHasLabel:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)optional;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(NSString *)displayFormat;
-(void)setSubmissionKey:(NSString *)arg1 ;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(void)setDisplayFormat:(NSString *)arg1 ;
-(id)submissionString;
-(NSString *)submissionKey;
-(void)setSubmissionFormat:(NSString *)arg1 ;
-(NSString *)submissionFormat;
-(NSData *)submissionValue;
-(NSString *)localizedPlaceholder;
-(void)setCurrentValue:(id<NSObject><NSCopying>)arg1 ;
-(BOOL)isAttributeTypeText;
-(BOOL)isAttributeTypeDate;
-(BOOL)isAttributeTypePicker;
-(BOOL)isAttributeTypeDocument;
-(BOOL)isAttributeTypeSMSOTP;
-(BOOL)isAttributeTypeCamera;
-(BOOL)isAttributeTypeLabel;
-(BOOL)isAttributeTypeFooter;
-(id)getCurrentValue;
-(BOOL)incorrect;
-(void)setIncorrect:(BOOL)arg1 ;
-(void)setIsSensitive:(BOOL)arg1 ;
-(BOOL)holdLocally;
-(void)setHoldLocally:(BOOL)arg1 ;
-(BOOL)notForVerification;
-(void)setNotForVerification:(BOOL)arg1 ;
-(BOOL)dataNodeProof;
-(void)setDataNodeProof:(BOOL)arg1 ;
-(NSString *)dataNodeProofGroup;
-(void)setDataNodeProofGroup:(NSString *)arg1 ;
-(void)setSubmissionValue:(NSData *)arg1 ;
-(NSString *)clientValidationRegex;
-(void)setClientValidationRegex:(NSString *)arg1 ;
-(NSString *)codeOnError;
-(void)setCodeOnError:(NSString *)arg1 ;
-(NSString *)serverValidationURL;
-(void)setServerValidationURL:(NSString *)arg1 ;
-(NSString *)supportingData;
-(void)setSupportingData:(NSString *)arg1 ;
@end

