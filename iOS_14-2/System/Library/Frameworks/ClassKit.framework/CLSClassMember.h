/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSClassMember : CLSObject <CLSRelationable> {

	BOOL _markedForDeletion;
	NSString* _personID;
	unsigned long long _roles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) unsigned long long roles;              //@synthesize roles=_roles - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
+(id)objectIDForClassID:(id)arg1 andPersonID:(id)arg2 ;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)roles;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personID;
-(BOOL)markedForDeletion;
-(id)_init;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setRoles:(unsigned long long)arg1 ;
-(id)initWithClassID:(id)arg1 personID:(id)arg2 roles:(unsigned long long)arg3 ;
@end

