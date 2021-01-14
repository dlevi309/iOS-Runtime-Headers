/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface ML3DatabaseTable : NSObject <NSCopying, NSMutableCopying> {

	NSString* _name;
	NSArray* _columns;
	NSArray* _foreignKeyConstraints;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * columns;                            //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) NSArray * foreignKeyConstraints;              //@synthesize foreignKeyConstraints=_foreignKeyConstraints - In the implementation block
-(NSArray *)columns;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 concreteClass:(Class)arg2 ;
-(id)columnDefinitionsSQL;
-(NSArray *)foreignKeyConstraints;
-(id)createTableSQLWithExistenceClause:(BOOL)arg1 ;
@end

