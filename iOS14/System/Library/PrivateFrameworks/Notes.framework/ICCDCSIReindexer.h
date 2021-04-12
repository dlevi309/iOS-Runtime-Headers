/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <libobjc.A.dylib/ICReindexing.h>

@class NSMutableArray, NSString;

@interface ICCDCSIReindexer : NSObject <ICReindexing> {

	NSMutableArray* _registeredDelegates;

}

@property (nonatomic,retain) NSMutableArray * registeredDelegates;              //@synthesize registeredDelegates=_registeredDelegates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchableIndex;
+(id)sharedReindexer;
-(void)deleteAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)reindexAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)registeredDelegates;
-(void)setRegisteredDelegates:(NSMutableArray *)arg1 ;
-(void)registerCoreDataCoreSpotlightDelegate:(id)arg1 ;
-(void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_reindexSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unregisterCoreDataCoreSpotlightDelegate:(id)arg1 ;
-(void)stopIndexing;
@end

