/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNVCardParsedResultBuilder.h>

@class CNMutableContact, NSString;

@interface CNContactVCardParsedResultBuilder : NSObject <CNVCardParsedResultBuilder> {

	CNMutableContact* _contact;
	BOOL _empty;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactKeyForVCardKey:(id)arg1 ;
+(/*^block*/id)contactValueTransformForVCardKey:(id)arg1 ;
+(id)labeledValuesWithValues:(id)arg1 transform:(/*^block*/id)arg2 labels:(id)arg3 isPrimaries:(id)arg4 ;
-(id)build;
-(id)init;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)setPersonFlags:(long long)arg1 ;
-(long long)personFlags;
-(long long)contactTypeFromPersonFlags:(long long)arg1 ;
-(long long)personFlagsByAddingContactType:(long long)arg1 toFlags:(long long)arg2 ;
-(BOOL)canSetValueForProperty:(id)arg1 ;
-(void)setUnknownProperties:(id)arg1 ;
-(BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4 ;
-(BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3 ;
-(id)validCountryCodes;
-(id)valueForProperty:(id)arg1 ;
@end

