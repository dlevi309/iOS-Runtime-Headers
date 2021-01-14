/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSString, NSArray;

@interface PXSearchActiveSearch : NSObject {

	NSString* _searchText;
	NSArray* _searchTokens;
	NSArray* _representedObjects;
	NSString* _priorityAssetUUID;

}

@property (nonatomic,copy) NSString * searchText;                                //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) NSArray * searchTokens;                             //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,retain) NSArray * representedObjects;                       //@synthesize representedObjects=_representedObjects - In the implementation block
@property (nonatomic,retain) NSString * priorityAssetUUID;                       //@synthesize priorityAssetUUID=_priorityAssetUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchText; 
@property (nonatomic,readonly) BOOL hasSearchTokens; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long searchTokenCount; 
@property (nonatomic,readonly) unsigned long long searchTermCount; 
@property (nonatomic,readonly) NSString * searchTermsString; 
-(void)setSearchTokens:(NSArray *)arg1 ;
-(NSString *)priorityAssetUUID;
-(NSArray *)searchTokens;
-(void)setRepresentedObjects:(NSArray *)arg1 ;
-(NSString *)searchText;
-(unsigned long long)searchTokenCount;
-(void)_generateRelatedSearchObjects;
-(void)setPriorityAssetUUID:(NSString *)arg1 ;
-(BOOL)hasSearchText;
-(void)setSearchText:(NSString *)arg1 ;
-(id)initWithSearchText:(id)arg1 searchTokens:(id)arg2 ;
-(NSString *)searchTermsString;
-(unsigned long long)searchTermCount;
-(BOOL)hasSearchTokens;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)representedObjects;
-(BOOL)isEqual:(id)arg1 ;
@end

