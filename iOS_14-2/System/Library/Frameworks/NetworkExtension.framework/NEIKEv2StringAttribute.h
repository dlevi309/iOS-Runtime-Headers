/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {

	NSString* _stringValue;
	unsigned long long _customType;

}

@property (assign,nonatomic) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NSString * stringValue;                               //@synthesize stringValue=_stringValue - In the implementation block
+(id)copyTypeDescription;
-(unsigned long long)valueType;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)attributeType;
-(unsigned long long)customType;
-(void)setCustomType:(unsigned long long)arg1 ;
-(id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 stringValue:(id)arg3 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(id)initWithStringValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

