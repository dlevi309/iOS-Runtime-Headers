/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSArray;

@interface ML3PersistentIDsPredicate : ML3Predicate {

	NSArray* _persistentIDs;
	BOOL _shouldContain;

}

@property (nonatomic,readonly) BOOL shouldContain;              //@synthesize shouldContain=_shouldContain - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(BOOL)arg3 ;
+(id)predicateWithPersistentIDs:(id)arg1 shouldContain:(BOOL)arg2 ;
-(BOOL)shouldContain;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithPersistentIDs:(id)arg1 shouldContain:(BOOL)arg2 ;
@end

