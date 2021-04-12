/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSNumber;

@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata {

	long long _type;
	NSNumber* _defaultValue;
	NSNumber* _minimumValue;
	NSNumber* _maximumValue;

}

@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSNumber * defaultValue;                     //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSNumber * minimumValue;                     //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,retain) NSNumber * maximumValue;                     //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) BOOL supportsNegativeNumbers; 
+(BOOL)supportsSecureCoding;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)defaultValue;
-(void)setDefaultValue:(NSNumber *)arg1 ;
-(void)setMinimumValue:(NSNumber *)arg1 ;
-(void)setMaximumValue:(NSNumber *)arg1 ;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(BOOL)supportsNegativeNumbers;
-(id)_localizedDialogTokensWithLocalizer:(id)arg1 ;
@end

