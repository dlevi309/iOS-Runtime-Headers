/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUArrayCellConfiguration.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSNumber, NSString;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {

	NSMutableDictionary* _artworkByURL;
	NSMutableArray* _artworkLoadOperations;

}

@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copyDefaultContext;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)setRepresentedObject:(id)arg1 ;
-(void)dealloc;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)cancelArtworkRequests;
-(id)copyImageDataProvider;
-(id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2 ;
-(void)reloadAfterArtworkLoad;
-(id)artworkImageForItemImage:(id)arg1 ;
-(id)artworkImageForURL:(id)arg1 ;
@end

