/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)types;
-(void)addType:(id)arg1 ;
-(BOOL)isPrimary;
-(void)setGrouping:(id)arg1 ;
-(id)grouping;
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)addTypes:(id)arg1 ;
@end

