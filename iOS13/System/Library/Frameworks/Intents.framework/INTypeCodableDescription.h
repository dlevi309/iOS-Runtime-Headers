/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableDescription.h>

@class NSString;

@interface INTypeCodableDescription : INCodableDescription {

	NSString* _attributeKeyPrefix;
	NSString* _attributesKeyPrefix;
	NSString* _displayName;
	NSString* _displayNameLocID;

}

@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayNameLocID;                           //@synthesize displayNameLocID=_displayNameLocID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)localizedDisplayName;
-(id)keyPrefix;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)_attributeKeyPrefix;
-(id)_attributesKeyPrefix;
-(id)localizedDisplayNameWithLocalizer:(id)arg1 ;
-(NSString *)displayNameLocID;
-(void)setDisplayNameLocID:(NSString *)arg1 ;
@end

