/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(NSString *)contactIdentifier;
-(id)initWithContactIdentifier:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 changeType:(long long)arg4 ;
-(NSString *)propertyKey;
-(NSString *)labeledValueIdentifier;
@end

