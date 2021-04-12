/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(id)initWithClassID:(id)arg1 personID:(id)arg2 roles:(unsigned long long)arg3 ;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(unsigned long long)roles;
-(void)setRoles:(unsigned long long)arg1 ;
-(BOOL)markedForDeletion;
@end

