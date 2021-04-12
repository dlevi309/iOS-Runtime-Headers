/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol NSObjectNSCopying;
@class DIAttribute, NSString, NSDictionary;

@interface PKPaymentSetupField : NSObject {

	id<NSObject><NSCopying> _currentValue;
	id<NSObject><NSCopying> _originalCameraCaptureValue;
	BOOL _optional;
	BOOL _currentValueFromCameraCapture;
	BOOL _requiresSecureSubmission;
	DIAttribute* _attribute;
	NSString* _identifier;
	NSString* _localizedDisplayName;
	NSString* _displayFormat;
	NSString* _defaultValue;
	NSString* _submissionKey;
	NSString* _submissionDestination;
	NSString* _localizedPlaceholder;
	NSDictionary* _rawConfigurationDictionary;

}

@property (nonatomic,copy) NSString * localizedPlaceholder;                                                          //@synthesize localizedPlaceholder=_localizedPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * displayFormat;                                                                 //@synthesize displayFormat=_displayFormat - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;                                                        //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy) NSString * submissionKey;                                                                 //@synthesize submissionKey=_submissionKey - In the implementation block
@property (nonatomic,copy) NSString * submissionDestination;                                                         //@synthesize submissionDestination=_submissionDestination - In the implementation block
@property (assign,nonatomic) BOOL requiresSecureSubmission;                                                          //@synthesize requiresSecureSubmission=_requiresSecureSubmission - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * rawConfigurationDictionary;                                       //@synthesize rawConfigurationDictionary=_rawConfigurationDictionary - In the implementation block
@property (getter=isBuiltIn,nonatomic,readonly) BOOL builtIn; 
@property (nonatomic,copy) NSString * defaultValue;                                                                  //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) DIAttribute * attribute;                                                                //@synthesize attribute=_attribute - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long fieldType; 
@property (nonatomic,copy) NSString * localizedDisplayName;                                                          //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * compactLocalizedDisplayName; 
@property (nonatomic,copy) id<NSObject><NSCopying> currentValue;                                                     //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> originalCameraCaptureValue;                                       //@synthesize originalCameraCaptureValue=_originalCameraCaptureValue - In the implementation block
@property (assign,getter=isCurrentValueFromCameraCapture,nonatomic) BOOL currentValueFromCameraCapture;              //@synthesize currentValueFromCameraCapture=_currentValueFromCameraCapture - In the implementation block
+(id)paymentSetupFieldWithIdentifier:(id)arg1 configuration:(id)arg2 ;
+(Class)classForIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
+(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
+(id)paymentSetupFieldWithDIAttribute:(id)arg1 ;
+(id)newRandomlyGeneratedField;
+(id)sampleCustomPaymentSetupFields;
-(id)init;
-(NSString *)identifier;
-(DIAttribute *)attribute;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(BOOL)isOptional;
-(id)displayString;
-(id<NSObject><NSCopying>)currentValue;
-(void)setCurrentValue:(id<NSObject><NSCopying>)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
-(NSString *)localizedDisplayName;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(BOOL)isBuiltIn;
-(unsigned long long)fieldType;
-(void)setAttribute:(DIAttribute *)arg1 ;
-(NSString *)localizedPlaceholder;
-(void)updateWithConfiguration:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)updateWithAttribute:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(void)setSubmissionKey:(NSString *)arg1 ;
-(void)setSubmissionDestination:(NSString *)arg1 ;
-(void)_setLocalizedDisplayName:(id)arg1 ;
-(void)setLocalizedPlaceholder:(NSString *)arg1 ;
-(NSString *)displayFormat;
-(void)setDisplayFormat:(NSString *)arg1 ;
-(BOOL)isFieldTypeLabel;
-(void)setRequiresSecureSubmission:(BOOL)arg1 ;
-(BOOL)isFieldTypeText;
-(BOOL)isFieldTypeDate;
-(BOOL)isFieldTypeFooter;
-(BOOL)isFieldTypePicker;
-(id)_submissionStringForValue:(id)arg1 ;
-(void)noteCurrentValueChanged;
-(id)textFieldObject;
-(id)dateFieldObject;
-(id)labelFieldObject;
-(id)footerFieldObject;
-(id)pickerFieldObject;
-(NSString *)compactLocalizedDisplayName;
-(id)submissionString;
-(BOOL)submissionStringMeetsAllRequirements;
-(void)setOriginalCameraCaptureValue:(id<NSObject><NSCopying>)arg1 ;
-(void)setCurrentValueFromCameraCapture:(BOOL)arg1 ;
-(id<NSObject><NSCopying>)originalCameraCaptureValue;
-(BOOL)isCurrentValueFromCameraCapture;
-(NSString *)submissionKey;
-(NSString *)submissionDestination;
-(BOOL)requiresSecureSubmission;
-(NSDictionary *)rawConfigurationDictionary;
@end

