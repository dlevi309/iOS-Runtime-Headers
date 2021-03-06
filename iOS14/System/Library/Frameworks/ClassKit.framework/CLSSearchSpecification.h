/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CLSSearchSpecification : NSObject <NSCopying, NSSecureCoding> {

	BOOL _includeUnsearchablePersons;
	unsigned long long _options;
	unsigned long long _behaviors;
	NSString* _searchString;
	NSArray* _searchTokens;
	unsigned long long _compareOptions;
	NSArray* _classSortDescriptors;
	NSArray* _classLocationIDs;
	NSArray* _personSortDescriptors;
	NSArray* _personLocationIDs;
	NSString* _requiredRoleID;
	long long _requiredRoleType;
	NSString* _requiredPrivilege;
	NSArray* _requiredPrivilegeLocationIDs;
	NSString* _prohibitedPrivilege;
	NSArray* _prohibitedPrivilegeLocationIDs;
	NSArray* _locationSortDescriptors;
	NSArray* _locationPersonIDs;
	long long _requiredLocationRoleType;
	NSString* _requiredLocationPrivilege;
	NSArray* _requiredLocationPersonIDs;
	NSString* _prohibitedLocationPrivilege;
	NSArray* _prohibitedLocationPersonIDs;
	NSArray* _requiredClassMemberClassIDs;
	unsigned long long _requiredClassMemberRole;

}

@property (assign) BOOL includeUnsearchablePersons; 
@property (copy) NSArray * personSortDescriptors; 
@property (copy,readonly) NSArray * personLocationIDs; 
@property (copy,readonly) NSString * requiredRoleID; 
@property (readonly) long long requiredRoleType; 
@property (copy,readonly) NSString * requiredPrivilege; 
@property (copy,readonly) NSArray * requiredPrivilegeLocationIDs; 
@property (copy,readonly) NSString * prohibitedPrivilege; 
@property (copy,readonly) NSArray * prohibitedPrivilegeLocationIDs; 
@property (copy) NSArray * classSortDescriptors; 
@property (copy,readonly) NSArray * classLocationIDs; 
@property (copy) NSArray * locationSortDescriptors; 
@property (readonly) long long requiredLocationRoleType; 
@property (copy,readonly) NSArray * locationPersonIDs; 
@property (copy,readonly) NSString * requiredLocationPrivilege; 
@property (copy,readonly) NSArray * requiredLocationPersonIDs; 
@property (copy,readonly) NSString * prohibitedLocationPrivilege; 
@property (copy,readonly) NSArray * prohibitedLocationPersonIDs; 
@property (readonly) unsigned long long requiredClassMemberRole; 
@property (copy,readonly) NSArray * requiredClassMemberClassIDs; 
@property (assign,nonatomic) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long behaviors;                       //@synthesize behaviors=_behaviors - In the implementation block
@property (copy) NSString * searchString;                                        //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSArray * searchTokens;                               //@synthesize searchTokens=_searchTokens - In the implementation block
@property (assign,nonatomic) unsigned long long compareOptions;                  //@synthesize compareOptions=_compareOptions - In the implementation block
@property (copy) NSArray * classSortDescriptors;                                 //@synthesize classSortDescriptors=_classSortDescriptors - In the implementation block
@property (nonatomic,copy) NSArray * classLocationIDs;                           //@synthesize classLocationIDs=_classLocationIDs - In the implementation block
@property (assign) BOOL includeUnsearchablePersons;                              //@synthesize includeUnsearchablePersons=_includeUnsearchablePersons - In the implementation block
@property (copy) NSArray * personSortDescriptors;                                //@synthesize personSortDescriptors=_personSortDescriptors - In the implementation block
@property (copy) NSArray * personLocationIDs;                                    //@synthesize personLocationIDs=_personLocationIDs - In the implementation block
@property (copy) NSString * requiredRoleID;                                      //@synthesize requiredRoleID=_requiredRoleID - In the implementation block
@property (assign) long long requiredRoleType;                                   //@synthesize requiredRoleType=_requiredRoleType - In the implementation block
@property (copy) NSString * requiredPrivilege;                                   //@synthesize requiredPrivilege=_requiredPrivilege - In the implementation block
@property (copy) NSArray * requiredPrivilegeLocationIDs;                         //@synthesize requiredPrivilegeLocationIDs=_requiredPrivilegeLocationIDs - In the implementation block
@property (copy) NSString * prohibitedPrivilege;                                 //@synthesize prohibitedPrivilege=_prohibitedPrivilege - In the implementation block
@property (copy) NSArray * prohibitedPrivilegeLocationIDs;                       //@synthesize prohibitedPrivilegeLocationIDs=_prohibitedPrivilegeLocationIDs - In the implementation block
@property (copy) NSArray * locationSortDescriptors;                              //@synthesize locationSortDescriptors=_locationSortDescriptors - In the implementation block
@property (copy) NSArray * locationPersonIDs;                                    //@synthesize locationPersonIDs=_locationPersonIDs - In the implementation block
@property (assign) long long requiredLocationRoleType;                           //@synthesize requiredLocationRoleType=_requiredLocationRoleType - In the implementation block
@property (copy) NSString * requiredLocationPrivilege;                           //@synthesize requiredLocationPrivilege=_requiredLocationPrivilege - In the implementation block
@property (copy) NSArray * requiredLocationPersonIDs;                            //@synthesize requiredLocationPersonIDs=_requiredLocationPersonIDs - In the implementation block
@property (copy) NSString * prohibitedLocationPrivilege;                         //@synthesize prohibitedLocationPrivilege=_prohibitedLocationPrivilege - In the implementation block
@property (copy) NSArray * prohibitedLocationPersonIDs;                          //@synthesize prohibitedLocationPersonIDs=_prohibitedLocationPersonIDs - In the implementation block
@property (copy) NSArray * requiredClassMemberClassIDs;                          //@synthesize requiredClassMemberClassIDs=_requiredClassMemberClassIDs - In the implementation block
@property (assign) unsigned long long requiredClassMemberRole;                   //@synthesize requiredClassMemberRole=_requiredClassMemberRole - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newlineAnchoredPredicateValueForToken:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)classLocationIDs;
-(void)setBehaviors:(unsigned long long)arg1 ;
-(unsigned long long)behaviors;
-(void)setRequiredClassMemberRole:(unsigned long long)arg1 ;
-(void)setSearchTokens:(NSArray *)arg1 ;
-(void)setProhibitedPrivilegeLocationIDs:(NSArray *)arg1 ;
-(void)setCompareOptions:(unsigned long long)arg1 ;
-(NSString *)requiredLocationPrivilege;
-(id)predicate;
-(NSArray *)requiredPrivilegeLocationIDs;
-(id)predicateUsingSubPredicateBlock:(/*^block*/id)arg1 ;
-(void)setProhibitedLocationPersonIDs:(NSArray *)arg1 ;
-(void)requirePrivilege:(id)arg1 onPersonIDs:(id)arg2 ;
-(NSArray *)prohibitedLocationPersonIDs;
-(void)setProhibitedPrivilege:(NSString *)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 behaviors:(unsigned long long)arg2 ;
-(unsigned long long)requiredClassMemberRole;
-(NSString *)prohibitedLocationPrivilege;
-(id)predicateForPersonsWithObjectIDs:(id)arg1 ;
-(NSArray *)searchTokens;
-(void)requireRole:(id)arg1 atLocationIDs:(id)arg2 ;
-(void)setRequiredClassMemberClassIDs:(NSArray *)arg1 ;
-(NSArray *)requiredClassMemberClassIDs;
-(void)setRequiredRoleID:(NSString *)arg1 ;
-(void)setPersonLocationIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)predicateForPersonsWithPersonIDs:(id)arg1 ;
-(unsigned long long)options;
-(void)restrictToClassesAtLocationIDs:(id)arg1 ;
-(void)setRequiredPrivilege:(NSString *)arg1 ;
-(void)setRequiredLocationPrivilege:(NSString *)arg1 ;
-(void)setIncludeUnsearchablePersons:(BOOL)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSArray *)locationSortDescriptors;
-(id)initWithOptions:(unsigned long long)arg1 behaviors:(unsigned long long)arg2 searchString:(id)arg3 ;
-(long long)requiredRoleType;
-(NSArray *)classSortDescriptors;
-(void)setClassSortDescriptors:(NSArray *)arg1 ;
-(id)predicateForPersons;
-(id)predicateForClasses;
-(BOOL)includeUnsearchablePersons;
-(void)setRequiredPrivilegeLocationIDs:(NSArray *)arg1 ;
-(void)prohibitPrivilege:(id)arg1 atLocationIDs:(id)arg2 ;
-(void)requireClassMemberRole:(unsigned long long)arg1 forClassIDs:(id)arg2 ;
-(BOOL)isClassMemberSearch;
-(void)prohibitPrivilege:(id)arg1 onPersonIDs:(id)arg2 ;
-(void)setLocationPersonIDs:(NSArray *)arg1 ;
-(NSString *)requiredPrivilege;
-(void)setRequiredRoleType:(long long)arg1 ;
-(void)setClassLocationIDs:(NSArray *)arg1 ;
-(BOOL)isClassSearch;
-(NSArray *)personSortDescriptors;
-(void)requirePrivilege:(id)arg1 atLocationIDs:(id)arg2 ;
-(BOOL)hasLocationConstraints;
-(BOOL)canUseClassPredicate;
-(BOOL)requiresDashboardEntitlement;
-(id)initWithCoder:(id)arg1 ;
-(void)requireRoleType:(long long)arg1 onPersonIDs:(id)arg2 ;
-(unsigned long long)compareOptions;
-(void)setRequiredLocationRoleType:(long long)arg1 ;
-(NSArray *)prohibitedPrivilegeLocationIDs;
-(void)setLocationSortDescriptors:(NSArray *)arg1 ;
-(id)predicateWithLocationIDs:(id)arg1 ;
-(BOOL)hasPersonConstraints;
-(long long)requiredLocationRoleType;
-(void)setSearchString:(NSString *)arg1 ;
-(NSString *)requiredRoleID;
-(NSArray *)requiredLocationPersonIDs;
-(NSArray *)locationPersonIDs;
-(BOOL)isLocationSearch;
-(BOOL)isPersonSearch;
-(BOOL)canUsePersonPredicate;
-(void)requireRoleType:(long long)arg1 atLocationIDs:(id)arg2 ;
-(void)setRequiredLocationPersonIDs:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(NSArray *)personLocationIDs;
-(NSString *)prohibitedPrivilege;
-(void)setProhibitedLocationPrivilege:(NSString *)arg1 ;
-(void)setPersonSortDescriptors:(NSArray *)arg1 ;
@end

