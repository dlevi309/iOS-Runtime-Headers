/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSSet;

@interface CRKASMCourseUpdateProperties : NSObject <NSCopying> {

	NSString* _name;
	NSNumber* _color;
	NSNumber* _mascot;
	NSSet* _usersToAdd;
	NSSet* _usersToRemove;
	NSSet* _trustedUsersToAdd;
	NSSet* _trustedUsersToRemove;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * color;                        //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSNumber * mascot;                       //@synthesize mascot=_mascot - In the implementation block
@property (nonatomic,copy) NSSet * usersToAdd;                        //@synthesize usersToAdd=_usersToAdd - In the implementation block
@property (nonatomic,copy) NSSet * usersToRemove;                     //@synthesize usersToRemove=_usersToRemove - In the implementation block
@property (nonatomic,copy) NSSet * trustedUsersToAdd;                 //@synthesize trustedUsersToAdd=_trustedUsersToAdd - In the implementation block
@property (nonatomic,copy) NSSet * trustedUsersToRemove;              //@synthesize trustedUsersToRemove=_trustedUsersToRemove - In the implementation block
-(NSNumber *)color;
-(NSString *)name;
-(NSNumber *)mascot;
-(void)setColor:(NSNumber *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMascot:(NSNumber *)arg1 ;
-(NSSet *)usersToAdd;
-(void)setUsersToAdd:(NSSet *)arg1 ;
-(NSSet *)usersToRemove;
-(void)setUsersToRemove:(NSSet *)arg1 ;
-(NSSet *)trustedUsersToAdd;
-(void)setTrustedUsersToAdd:(NSSet *)arg1 ;
-(NSSet *)trustedUsersToRemove;
-(void)setTrustedUsersToRemove:(NSSet *)arg1 ;
-(BOOL)areFulfilledByCourse:(id)arg1 ;
@end

