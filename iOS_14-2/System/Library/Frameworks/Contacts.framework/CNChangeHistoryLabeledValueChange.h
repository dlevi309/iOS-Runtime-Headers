/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNChangeHistoryLabeledValueChange : NSObject <NSSecureCoding> {

	NSString* _contactIdentifier;
	NSString* _propertyKey;
	NSString* _labeledValueIdentifier;
	long long _changeType;

}

@property (nonatomic,readonly) NSString * contactIdentifier;                   //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * propertyKey;                    //@synthesize propertyKey=_propertyKey - In the implementation block
@property (nonatomic,readonly) NSString * labeledValueIdentifier;              //@synthesize labeledValueIdentifier=_labeledValueIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                           //@synthesize changeType=_changeType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)contactIdentifier;
-(long long)changeType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)propertyKey;
-(NSString *)labeledValueIdentifier;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContactIdentifier:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 changeType:(long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

