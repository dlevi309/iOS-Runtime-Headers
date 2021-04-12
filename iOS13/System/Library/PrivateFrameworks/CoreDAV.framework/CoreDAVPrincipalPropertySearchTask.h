/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {

	NSSet* _searchItems;
	BOOL _applyToPrincipalCollectionSet;
	NSDictionary* _extraAttributes;

}

@property (nonatomic,retain) NSSet * searchItems;                             //@synthesize searchItems=_searchItems - In the implementation block
@property (nonatomic,retain) NSDictionary * extraAttributes;                  //@synthesize extraAttributes=_extraAttributes - In the implementation block
@property (assign,nonatomic) BOOL applyToPrincipalCollectionSet;              //@synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet - In the implementation block
-(NSSet *)searchItems;
-(void)setSearchItems:(NSSet *)arg1 ;
-(NSDictionary *)extraAttributes;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)setApplyToPrincipalCollectionSet:(BOOL)arg1 ;
-(id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(BOOL)arg4 extraAttributes:(id)arg5 ;
-(BOOL)applyToPrincipalCollectionSet;
@end

