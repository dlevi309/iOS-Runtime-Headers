/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _addressBook;
	CoreDAVItemWithNoChildren* _searchAddressBook;
	CoreDAVItemWithNoChildren* _shared;
	CoreDAVItemWithNoChildren* _principal;
	CoreDAVItemWithNoChildren* _collection;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * addressBook;                    //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * searchAddressBook;              //@synthesize searchAddressBook=_searchAddressBook - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * shared;                         //@synthesize shared=_shared - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * principal;                      //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * collection;                     //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;                //@synthesize unauthenticated=_unauthenticated - In the implementation block
@property (nonatomic,readonly) NSSet * stringSet; 
+(id)copyParseRules;
-(void)setShared:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)shared;
-(CoreDAVItemWithNoChildren *)collection;
-(id)init;
-(void)setCollection:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)write:(id)arg1 ;
-(CoreDAVItemWithNoChildren *)addressBook;
-(id)description;
-(void)setPrincipal:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)principal;
-(void)setAddressBook:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(NSSet *)stringSet;
-(CoreDAVItemWithNoChildren *)searchAddressBook;
-(BOOL)isTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSearchAddressBook:(CoreDAVItemWithNoChildren *)arg1 ;
@end

