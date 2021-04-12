/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class SAUIDomainObjectPicker, SADomainObject;

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (nonatomic,retain) SAUIDomainObjectPicker * domainObjectPicker; 
@property (nonatomic,retain) SADomainObject * selectedItem; 
+(id)domainObjectPickerSelection;
+(id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SADomainObject *)selectedItem;
-(SAUIDomainObjectPicker *)domainObjectPicker;
-(void)setDomainObjectPicker:(SAUIDomainObjectPicker *)arg1 ;
-(void)setSelectedItem:(SADomainObject *)arg1 ;
@end

