/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPCollectionDataSource.h>
#import <libobjc.A.dylib/FPItemCollectionItemIDBasedDelegate.h>

@protocol FPCollectionDataSourceDelegate;
@class NSArray, NSString;

@interface _FPUnionDataSource : NSObject <FPCollectionDataSource, FPItemCollectionItemIDBasedDelegate> {

	NSArray* _collections;
	BOOL _isRunning;
	id<FPCollectionDataSourceDelegate> delegate;

}

@property (nonatomic,readonly) BOOL hasMoreIncoming; 
@property (assign,nonatomic,__weak) id<FPCollectionDataSourceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<FPCollectionDataSourceDelegate>)delegate;
-(void)setDelegate:(id<FPCollectionDataSourceDelegate>)arg1 ;
-(void)start;
-(void)dataForCollectionShouldBeReloaded:(id)arg1 ;
-(void)collection:(id)arg1 didEncounterError:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateObservedItem:(id)arg2 ;
-(void)enumerationMightHaveResumed;
-(BOOL)hasMoreIncoming;
-(id)initWithCollections:(id)arg1 ;
-(void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4 ;
@end

