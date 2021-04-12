/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSimpleGraphObject.h>

@class NSString, HDSimpleGraphNode;

@interface HDSimpleGraphRelationship : HDSimpleGraphObject {

	BOOL _isReverseRelationship;
	NSString* _name;
	long long _nameID;
	long long _subjectID;
	long long _objectID;
	HDSimpleGraphNode* _subject;
	HDSimpleGraphNode* _object;

}

@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long nameID;                                //@synthesize nameID=_nameID - In the implementation block
@property (assign,nonatomic) BOOL isReverseRelationship;                      //@synthesize isReverseRelationship=_isReverseRelationship - In the implementation block
@property (assign,nonatomic) long long subjectID;                             //@synthesize subjectID=_subjectID - In the implementation block
@property (assign,nonatomic) long long objectID;                              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic,__weak) HDSimpleGraphNode * subject;              //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic,__weak) HDSimpleGraphNode * object;               //@synthesize object=_object - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(HDSimpleGraphNode *)object;
-(void)setObject:(HDSimpleGraphNode *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)objectID;
-(HDSimpleGraphNode *)subject;
-(void)setSubject:(HDSimpleGraphNode *)arg1 ;
-(void)setObjectID:(long long)arg1 ;
-(BOOL)isReverseRelationship;
-(long long)subjectID;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 nameID:(long long)arg4 isReverse:(BOOL)arg5 subjectID:(long long)arg6 subject:(id)arg7 objectID:(long long)arg8 object:(id)arg9 ;
-(id)work_subjectWithError:(id*)arg1 ;
-(id)work_databaseObjectWithError:(id*)arg1 ;
-(long long)nameID;
-(void)setNameID:(long long)arg1 ;
-(void)setIsReverseRelationship:(BOOL)arg1 ;
-(void)setSubjectID:(long long)arg1 ;
@end

