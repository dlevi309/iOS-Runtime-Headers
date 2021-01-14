/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABVCardValueSetter.h>

@interface ABVCardPersonValueSetter : ABVCardValueSetter {

	void* _person;
	CFArrayRef _properties;

}
+(CFArrayRef)supportedProperties;
-(id)fullName;
-(BOOL)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
-(id)imageData;
-(CFArrayRef)foundProperties;
-(BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5 ;
-(void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned)arg2 ;
-(void*)valueForProperty:(unsigned)arg1 ;
-(id)initWithPerson:(void*)arg1 ;
-(void)dealloc;
@end

