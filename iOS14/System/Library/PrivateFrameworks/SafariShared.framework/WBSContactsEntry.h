/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class CNContact;

@interface WBSContactsEntry : NSObject {

	CNContact* _contact;

}

@property (nonatomic,readonly) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
+(BOOL)_isContactsLabel:(id)arg1 ;
+(BOOL)_isContactsProperty:(id)arg1 ;
+(BOOL)isWBSProxyProperty:(id)arg1 ;
+(id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3 atIndex:(unsigned long long)arg4 ;
+(id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3 ;
+(id)_valueStringForWBSComponent:(id)arg1 inAddress:(id)arg2 ;
+(BOOL)_isValueAStringForContactsProperty:(id)arg1 ;
+(id)_valueStringForWBSComponent:(id)arg1 inInstantMessageAddress:(id)arg2 ;
+(id)localizedWBSPropertyOrLabel:(id)arg1 ;
-(CNContact *)contact;
-(id)fullName;
-(unsigned long long)_numberOfValuesForWBSProperty:(id)arg1 ;
-(id)valueForWBSProxyProperty:(id)arg1 ;
-(unsigned long long)_numberOfValuesForWBSProperty:(id)arg1 andContact:(id)arg2 ;
-(id)valueStringForWBSProperty:(id)arg1 wbsComponent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)initWithContact:(id)arg1 ;
@end

