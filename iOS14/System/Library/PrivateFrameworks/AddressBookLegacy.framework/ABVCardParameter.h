/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	BOOL _primary;

}
-(BOOL)isPrimary;
-(id)types;
-(id)grouping;
-(id)name;
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)setGrouping:(id)arg1 ;
-(void)addType:(id)arg1 ;
-(void)addTypes:(id)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(id)value;
-(void)dealloc;
@end

