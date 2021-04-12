/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class NSArray, MPModelLibrarySearchRequest, NSString;

@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	NSArray* _resultContainers;
	MPModelLibrarySearchRequest* _request;

}

@property (nonatomic,copy,readonly) NSArray * resultContainers;                //@synthesize resultContainers=_resultContainers - In the implementation block
@property (nonatomic,copy) MPModelLibrarySearchRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(void)setRequest:(MPModelLibrarySearchRequest *)arg1 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(BOOL)hasMoreResultsForSectionAtIndex:(long long)arg1 ;
-(long long)searchWeightForIndexPath:(id)arg1 ;
-(NSArray *)resultContainers;
-(MPModelLibrarySearchRequest *)request;
-(id)initWithEntitiesQueryResultContainers:(id)arg1 ;
@end

