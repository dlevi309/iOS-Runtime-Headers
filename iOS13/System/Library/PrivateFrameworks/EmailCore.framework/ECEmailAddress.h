/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) ECEmailAddress * emailAddressValue; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(BOOL)supportsSecureCoding;
+(id)emailAddressesFromStrings:(id)arg1 invalidAddresses:(id*)arg2 ;
+(id)emailAddressWithString:(id)arg1 ;
+(id)_cachedEmailAddressForString:(id)arg1 generator:(/*^block*/id)arg2 ;
-(id)em_displayableString;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(ECEmailAddressComponents *)components;
-(NSString *)ef_publicDescription;
-(ECEmailAddress *)emailAddressValue;
-(NSArray *)groupList;
-(BOOL)_createComponentsFrom:(id)arg1 ;
-(id)_initWithComponents:(id)arg1 ;
@end

