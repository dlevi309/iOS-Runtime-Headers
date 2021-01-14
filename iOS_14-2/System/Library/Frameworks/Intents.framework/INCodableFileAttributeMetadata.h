/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSString, NSArray;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata {

	NSString* _type;
	NSArray* _customUTIs;

}

@property (nonatomic,readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * customUTIs;              //@synthesize customUTIs=_customUTIs - In the implementation block
@property (nonatomic,readonly) NSArray * UTIs; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(NSArray *)UTIs;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionTypeKey;
-(NSArray *)customUTIs;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionCustomUTIsKey;
-(id)__INIntentResponseCodableDescriptionCustomUTIsKey;
-(id)__INTypeCodableDescriptionCustomUTIsKey;
-(id)__INTypeCodableDescriptionTypeKey;
@end

