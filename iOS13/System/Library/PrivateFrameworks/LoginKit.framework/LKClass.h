/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <libobjc.A.dylib/LKStudentProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSNumber, NSMutableDictionary;

@interface LKClass : NSObject <LKStudentProviding, NSSecureCoding> {

	NSArray* _students;
	NSString* _classDescription;
	NSString* _className;
	NSString* _classImageURL;
	NSNumber* _classID;
	NSArray* _instructors;
	NSMutableDictionary* _avatarNameSimilarityDictionary;
	NSMutableDictionary* _givenNameSimilarityDictionary;

}

@property (nonatomic,retain) NSString * classDescription;                                       //@synthesize classDescription=_classDescription - In the implementation block
@property (nonatomic,retain) NSString * className;                                              //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) NSString * classImageURL;                                          //@synthesize classImageURL=_classImageURL - In the implementation block
@property (nonatomic,retain) NSNumber * classID;                                                //@synthesize classID=_classID - In the implementation block
@property (nonatomic,retain) NSArray * instructors;                                             //@synthesize instructors=_instructors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * avatarNameSimilarityDictionary;              //@synthesize avatarNameSimilarityDictionary=_avatarNameSimilarityDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * givenNameSimilarityDictionary;               //@synthesize givenNameSimilarityDictionary=_givenNameSimilarityDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * students;                                                  //@synthesize students=_students - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(void)setClassID:(NSNumber *)arg1 ;
-(NSNumber *)classID;
-(NSArray *)students;
-(void)setStudents:(NSArray *)arg1 ;
-(BOOL)isEqualToLKClass:(id)arg1 ;
-(NSString *)classDescription;
-(id)sortUsers:(id)arg1 ;
-(NSArray *)instructors;
-(void)_updateNamingSimilarityInfoForUser:(id)arg1 ;
-(id)initWithStudents:(id)arg1 instructors:(id)arg2 className:(id)arg3 classID:(id)arg4 ;
-(id)initWithClassDictionary:(id)arg1 usersByUserIdentifier:(id)arg2 ;
-(void)setClassDescription:(NSString *)arg1 ;
-(NSString *)classImageURL;
-(void)setClassImageURL:(NSString *)arg1 ;
-(void)setInstructors:(NSArray *)arg1 ;
-(NSMutableDictionary *)avatarNameSimilarityDictionary;
-(void)setAvatarNameSimilarityDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)givenNameSimilarityDictionary;
-(void)setGivenNameSimilarityDictionary:(NSMutableDictionary *)arg1 ;
@end

