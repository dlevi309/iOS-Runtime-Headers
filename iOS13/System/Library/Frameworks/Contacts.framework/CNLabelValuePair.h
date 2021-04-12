/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
@end

