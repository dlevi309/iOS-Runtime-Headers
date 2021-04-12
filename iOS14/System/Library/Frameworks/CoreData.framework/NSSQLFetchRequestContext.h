/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSString, NSSQLModel, NSSQLEntity, NSFaultHandler, _PFFetchPlanHeader, NSSQLiteStatement, NSMutableSet, NSMutableArray, NSFetchRequest, NSDictionary, NSArray;

@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext {

	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	NSString* _fileBackedFuturesDirectory;
	NSSQLModel* _sqlModel;
	NSSQLEntity* _sqlEntity;
	NSFaultHandler* _faultHandler;
	_PFFetchPlanHeader* _fetchPlan;
	NSSQLiteStatement* _statement;
	NSMutableSet* _objectIDsToRegister;
	NSMutableSet* _objectsToAwaken;
	NSMutableArray* _resultFaultsThatWereFired;
	NSSQLFetchRequestContext* _parentContext;
	int _fileProtectionLevel;
	BOOL _isFaultRequest;
	NSFetchRequest* _originalRequest;
	BOOL _shouldUseBatches;
	BOOL _storeIsUbiquitized;
	BOOL _isUsingCachedStatement;
	NSMutableArray* _concurrentFetchingPipelineRows;
	NSDictionary* _prefetchingSubstitutionVariables;

}

@property (nonatomic,readonly) NSSQLFetchRequestContext * parentContext;                   //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) NSFetchRequest * request; 
@property (nonatomic,retain) NSSQLiteStatement * fetchStatement; 
@property (nonatomic,readonly) NSFetchRequest * originalRequest;                           //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,readonly) BOOL storeIsUbiquitized;                                    //@synthesize storeIsUbiquitized=_storeIsUbiquitized - In the implementation block
@property (nonatomic,readonly) NSString * externalDataReferencesDirectory;                 //@synthesize externalDataReferencesDirectory=_externalDataReferencesDirectory - In the implementation block
@property (nonatomic,readonly) NSString * externalDataLinksDirectory;                      //@synthesize externalDataLinksDirectory=_externalDataLinksDirectory - In the implementation block
@property (nonatomic,readonly) NSString * fileBackedFuturesDirectory;                      //@synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory - In the implementation block
@property (nonatomic,readonly) int fileProtectionLevel;                                    //@synthesize fileProtectionLevel=_fileProtectionLevel - In the implementation block
@property (nonatomic,readonly) NSSQLModel * sqlModel;                                      //@synthesize sqlModel=_sqlModel - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * sqlEntityForFetchRequest;                     //@synthesize sqlEntity=_sqlEntity - In the implementation block
@property (nonatomic,readonly) NSFaultHandler * faultHandler;                              //@synthesize faultHandler=_faultHandler - In the implementation block
@property (nonatomic,readonly) _PFFetchPlanHeader * fetchPlan;                             //@synthesize fetchPlan=_fetchPlan - In the implementation block
@property (nonatomic,readonly) NSArray * objectIDsToRegisterWithContext; 
@property (nonatomic,readonly) NSArray * objectsToAwaken; 
@property (assign,nonatomic) BOOL isFaultRequest;                                          //@synthesize isFaultRequest=_isFaultRequest - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseBatches;                                      //@synthesize shouldUseBatches=_shouldUseBatches - In the implementation block
@property (assign,nonatomic) BOOL isUsingCachedStatement;                                  //@synthesize isUsingCachedStatement=_isUsingCachedStatement - In the implementation block
@property (nonatomic,retain) NSDictionary * prefetchingSubstitutionVariables;              //@synthesize prefetchingSubstitutionVariables=_prefetchingSubstitutionVariables - In the implementation block
@property (nonatomic,retain,readonly) NSArray * faultsThatWereFired;                       //@synthesize resultFaultsThatWereFired=_resultFaultsThatWereFired - In the implementation block
-(NSFaultHandler *)faultHandler;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(NSString *)fileBackedFuturesDirectory;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(NSFetchRequest *)originalRequest;
-(BOOL)isFaultRequest;
-(NSDictionary *)prefetchingSubstitutionVariables;
-(void)addObjectsToAwaken:(id)arg1 ;
-(void)executeEpilogue;
-(BOOL)isUsingCachedStatement;
-(NSArray *)objectIDsToRegisterWithContext;
-(id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)setFetchStatement:(NSSQLiteStatement *)arg1 ;
-(void)_setupBindVariablesForCachedStatement:(id)arg1 usingValues:(id)arg2 ;
-(NSArray *)objectsToAwaken;
-(NSFetchRequest *)request;
-(void)_fireFaultsForValue:(id)arg1 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(NSString *)externalDataLinksDirectory;
-(id)initWithRequest:(id)arg1 connection:(id)arg2 context:(id)arg3 sqlCore:(id)arg4 parentContext:(id)arg5 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)persistRows:(id)arg1 ;
-(NSSQLiteStatement *)fetchStatement;
-(void)executePrologue;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(void)cacheStatement:(id)arg1 ;
-(void)_preparePredicate:(id)arg1 ;
-(void)setPrefetchingSubstitutionVariables:(NSDictionary *)arg1 ;
-(NSArray *)faultsThatWereFired;
-(id)_createStatement;
-(void)addObjectIDsToRegister:(id)arg1 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(BOOL)storeIsUbiquitized;
-(NSSQLFetchRequestContext *)parentContext;
-(void)setIsFaultRequest:(BOOL)arg1 ;
-(NSSQLModel *)sqlModel;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(BOOL)shouldUseBatches;
-(void)addFaultsThatWereFired:(id)arg1 ;
-(id)cachedStatement;
-(void)setIsUsingCachedStatement:(BOOL)arg1 ;
-(int)fileProtectionLevel;
-(NSString *)externalDataReferencesDirectory;
-(_PFFetchPlanHeader *)fetchPlan;
-(void)dealloc;
-(id)createChildContextForNestedFetchRequest:(id)arg1 ;
-(NSSQLEntity *)sqlEntityForFetchRequest;
@end

