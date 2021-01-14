/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)httpMethod;
-(void)setSearchItems:(NSSet *)arg1 ;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(id)requestBody;
-(NSDictionary *)extraAttributes;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(void)setApplyToPrincipalCollectionSet:(BOOL)arg1 ;
-(id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(BOOL)arg4 extraAttributes:(id)arg5 ;
-(BOOL)applyToPrincipalCollectionSet;
@end

