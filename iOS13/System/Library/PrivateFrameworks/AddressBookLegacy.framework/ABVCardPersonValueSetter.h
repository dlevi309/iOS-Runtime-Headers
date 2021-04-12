/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABVCardValueSetter.h>

@interface ABVCardPersonValueSetter : ABVCardValueSetter {

	void* _person;
	CFArrayRef _properties;

}
+(CFArrayRef)supportedProperties;
-(void)dealloc;
-(id)fullName;
-(void*)valueForProperty:(unsigned)arg1 ;
-(BOOL)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
-(id)imageData;
-(id)initWithPerson:(void*)arg1 ;
-(CFArrayRef)foundProperties;
-(BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5 ;
-(void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned)arg2 ;
@end

