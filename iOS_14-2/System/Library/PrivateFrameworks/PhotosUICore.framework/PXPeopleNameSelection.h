/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPerson;
@class CNContact, NSString;

@interface PXPeopleNameSelection : NSObject {

	unsigned long long _selectionType;
	id<PXPerson> _person;
	CNContact* _contact;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long selectionType;              //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,readonly) id<PXPerson> person;                           //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                           //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
-(id<PXPerson>)person;
-(NSString *)localizedName;
-(CNContact *)contact;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(unsigned long long)selectionType;
-(id)initWithSelectedPerson:(id)arg1 ;
-(void)setLinkedPerson:(id)arg1 ;
-(id)initWithName:(id)arg1 contact:(id)arg2 person:(id)arg3 type:(unsigned long long)arg4 ;
@end

