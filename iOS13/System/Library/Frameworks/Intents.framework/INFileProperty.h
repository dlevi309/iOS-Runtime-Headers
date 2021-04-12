/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INFilePropertyExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INDateComponentsRange, INPerson, NSNumber;

@interface INFileProperty : NSObject <INFilePropertyExport, NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _qualifier;
	NSString* _type;
	INDateComponentsRange* _dateComponentsRange;
	INPerson* _person;
	NSString* _value;
	NSNumber* _quantity;

}

@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * qualifier;                                     //@synthesize qualifier=_qualifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * dateComponentsRange;              //@synthesize dateComponentsRange=_dateComponentsRange - In the implementation block
@property (nonatomic,copy,readonly) INPerson * person;                                        //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * quantity;                                      //@synthesize quantity=_quantity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(id)_dictionaryRepresentation;
-(NSNumber *)quantity;
-(INPerson *)person;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)qualifier;
-(INDateComponentsRange *)dateComponentsRange;
-(id)initWithName:(id)arg1 qualifier:(id)arg2 type:(id)arg3 dateComponentsRange:(id)arg4 person:(id)arg5 value:(id)arg6 quantity:(id)arg7 ;
@end

