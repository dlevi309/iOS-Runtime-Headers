/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNLabelValuePair : NSObject <NSCopying> {

	NSString* _label;
	id _value;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (readonly) id value;                      //@synthesize value=_value - In the implementation block
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
@end

