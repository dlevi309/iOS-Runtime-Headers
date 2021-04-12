/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class NSArray, MPModelRequest, NSString;

@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	NSArray* _resultContainers;
	MPModelRequest* _request;

}

@property (nonatomic,copy,readonly) NSArray * resultContainers;              //@synthesize resultContainers=_resultContainers - In the implementation block
@property (nonatomic,retain) MPModelRequest * request;                       //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequest:(MPModelRequest *)arg1 ;
-(MPModelRequest *)request;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)initWithEntitiesQueryResultContainers:(id)arg1 ;
-(NSArray *)resultContainers;
@end

