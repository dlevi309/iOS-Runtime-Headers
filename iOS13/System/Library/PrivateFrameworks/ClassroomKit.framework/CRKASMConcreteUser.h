/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMUser.h>

@protocol CRKASMNameComponents, CRKASMOrganization, CRKClassKitPerson;
@class NSString, NSObject;

@interface CRKASMConcreteUser : NSObject <CRKASMUser> {

	NSString* _identifier;
	NSObject*<CRKASMNameComponents> _nameComponents;
	NSObject*<CRKASMOrganization> _organization;
	id<CRKClassKitPerson> _backingPerson;

}

@property (nonatomic,retain) id<CRKClassKitPerson> backingPerson;                           //@synthesize backingPerson=_backingPerson - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<CRKASMNameComponents> nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,readonly) NSObject*<CRKASMOrganization> organization;                  //@synthesize organization=_organization - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSObject*<CRKASMOrganization>)organization;
-(NSObject*<CRKASMNameComponents>)nameComponents;
-(id)initWithPerson:(id)arg1 ;
-(void)updateWithPerson:(id)arg1 ;
-(id<CRKClassKitPerson>)backingPerson;
-(void)setBackingPerson:(id<CRKClassKitPerson>)arg1 ;
@end

