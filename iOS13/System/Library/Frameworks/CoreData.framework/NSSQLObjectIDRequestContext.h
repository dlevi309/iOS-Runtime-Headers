/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLModel;

@interface NSSQLObjectIDRequestContext : NSSQLStoreRequestContext {

	NSDictionary* _entitiesAndCounts;
	NSSQLModel* _model;

}

@property (nonatomic,readonly) NSDictionary * entitiesAndCounts;              //@synthesize entitiesAndCounts=_entitiesAndCounts - In the implementation block
@property (nonatomic,readonly) NSSQLModel * model;                            //@synthesize model=_model - In the implementation block
-(void)dealloc;
-(NSSQLModel *)model;
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(NSDictionary *)entitiesAndCounts;
@end

