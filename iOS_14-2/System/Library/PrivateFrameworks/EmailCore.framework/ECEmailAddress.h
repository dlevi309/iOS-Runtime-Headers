/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/ECEmailAddressConvertible.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, ECEmailAddressComponents;

@interface ECEmailAddress : NSObject <ECEmailAddressConvertible, EFPubliclyDescribable, NSSecureCoding> {

	unsigned long long _hash;
	NSArray* _groupList;
	ECEmailAddressComponents* _components;

}

@property (copy,readonly) NSString * idnaAddress; 
@property (nonatomic,copy,readonly) ECEmailAddressComponents * components;              //@synthesize components=_components - In the implementation block
@property (readonly) NSString * stringValue; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) NSString * simpleAddress; 
@property (copy,readonly) NSString * localPart; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSArray * groupList;                                          //@synthesize groupList=_groupList - In the implementation block
@property (nonatomic,readonly) ECEmailAddress * emailAddressValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)emailAddressWithString:(id)arg1 ;
+(id)emailAddressesFromStrings:(id)arg1 invalidAddresses:(id*)arg2 ;
+(id)_cachedEmailAddressForString:(id)arg1 generator:(/*^block*/id)arg2 ;
-(id)em_displayableString;
-(NSArray *)groupList;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithString:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)debugDescription;
-(ECEmailAddress *)emailAddressValue;
-(NSString *)stringValue;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(ECEmailAddressComponents *)components;
-(NSString *)description;
-(id)_initWithComponents:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_createComponentsFrom:(id)arg1 ;
@end

