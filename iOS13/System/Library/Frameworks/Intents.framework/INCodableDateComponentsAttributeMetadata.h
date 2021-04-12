/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INCodableAttributeMetadata.h>

@class NSString;

@interface INCodableDateComponentsAttributeMetadata : INCodableAttributeMetadata {

	long long _type;
	long long _format;
	unsigned long long _dateStyle;
	unsigned long long _timeStyle;
	NSString* _formatString;
	NSString* _formatStringID;

}

@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long format;                            //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) unsigned long long dateStyle;                //@synthesize dateStyle=_dateStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long timeStyle;                //@synthesize timeStyle=_timeStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * formatString;                //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy,readonly) NSString * formatStringID;              //@synthesize formatStringID=_formatStringID - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)dateStyle;
-(unsigned long long)timeStyle;
-(long long)format;
-(NSString *)formatString;
-(id)localizedFormatString;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSString *)formatStringID;
-(id)localizedFormatStringWithLocalizer:(id)arg1 ;
@end

