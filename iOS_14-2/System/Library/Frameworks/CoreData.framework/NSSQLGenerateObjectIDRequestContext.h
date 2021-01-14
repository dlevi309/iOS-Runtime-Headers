/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLModel;

@interface NSSQLGenerateObjectIDRequestContext : NSSQLStoreRequestContext {

	NSDictionary* _entitiesAndCounts;
	NSSQLModel* _model;

}

@property (nonatomic,readonly) NSDictionary * entitiesAndCounts;              //@synthesize entitiesAndCounts=_entitiesAndCounts - In the implementation block
@property (nonatomic,readonly) NSSQLModel * model;                            //@synthesize model=_model - In the implementation block
-(NSSQLModel *)model;
-(NSDictionary *)entitiesAndCounts;
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(void)dealloc;
@end

