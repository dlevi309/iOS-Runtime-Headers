/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSNumber, NSString;

@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata {

	NSNumber* _defaultValue;
	NSString* _falseDisplayName;
	NSString* _falseDisplayNameID;
	NSString* _trueDisplayName;
	NSString* _trueDisplayNameID;

}

@property (nonatomic,copy) NSNumber * defaultValue;                                    //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * falseDisplayName;                                //@synthesize falseDisplayName=_falseDisplayName - In the implementation block
@property (nonatomic,copy) NSString * falseDisplayNameID;                              //@synthesize falseDisplayNameID=_falseDisplayNameID - In the implementation block
@property (nonatomic,copy) NSString * trueDisplayName;                                 //@synthesize trueDisplayName=_trueDisplayName - In the implementation block
@property (nonatomic,copy) NSString * trueDisplayNameID;                               //@synthesize trueDisplayNameID=_trueDisplayNameID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTrueDisplayName; 
@property (nonatomic,copy,readonly) NSString * localizedFalseDisplayName; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)defaultValue;
-(void)setDefaultValue:(NSNumber *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSString *)localizedTrueDisplayName;
-(id)localizedTrueDisplayNameWithLocalizer:(id)arg1 ;
-(NSString *)localizedFalseDisplayName;
-(id)localizedFalseDisplayNameWithLocalizer:(id)arg1 ;
-(NSString *)falseDisplayName;
-(void)setFalseDisplayName:(NSString *)arg1 ;
-(NSString *)falseDisplayNameID;
-(void)setFalseDisplayNameID:(NSString *)arg1 ;
-(NSString *)trueDisplayName;
-(void)setTrueDisplayName:(NSString *)arg1 ;
-(NSString *)trueDisplayNameID;
-(void)setTrueDisplayNameID:(NSString *)arg1 ;
@end

