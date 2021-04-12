/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VSKeychainItemAttribute : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _attributeType;
	NSString* _attributeValueClassName;
	const CFStringRef _secItemAttributeKey;
	id _defaultValue;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                   //@synthesize attributeType=_attributeType - In the implementation block
@property (nonatomic,copy) NSString * attributeValueClassName;                   //@synthesize attributeValueClassName=_attributeValueClassName - In the implementation block
@property (assign,nonatomic) const CFStringRef secItemAttributeKey;              //@synthesize secItemAttributeKey=_secItemAttributeKey - In the implementation block
@property (nonatomic,retain) id defaultValue;                                    //@synthesize defaultValue=_defaultValue - In the implementation block
-(void)setAttributeValueClassName:(NSString *)arg1 ;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(unsigned long long)attributeType;
-(NSString *)attributeValueClassName;
-(id)defaultValue;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setSecItemAttributeKey:(const CFStringRef)arg1 ;
-(const CFStringRef)secItemAttributeKey;
@end

