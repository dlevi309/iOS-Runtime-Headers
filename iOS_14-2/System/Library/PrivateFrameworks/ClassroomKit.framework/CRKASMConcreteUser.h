/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMUser.h>

@protocol CRKASMNameComponents, CRKClassKitPerson;
@class NSString;

@interface CRKASMConcreteUser : NSObject <CRKASMUser> {

	NSString* _identifier;
	NSString* _appleID;
	id<CRKASMNameComponents> _nameComponents;
	id<CRKClassKitPerson> _backingPerson;

}

@property (nonatomic,readonly) id<CRKClassKitPerson> backingPerson;                  //@synthesize backingPerson=_backingPerson - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * appleID;                              //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) id<CRKASMNameComponents> nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)appleID;
-(id<CRKASMNameComponents>)nameComponents;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBackingPerson:(id)arg1 ;
-(BOOL)isEqualToConcreteUser:(id)arg1 ;
-(id<CRKClassKitPerson>)backingPerson;
@end

