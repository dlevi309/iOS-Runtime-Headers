/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <Foundation/NSOperation.h>

@protocol PXCollectionFetchOperationDelegate;
@class PHFetchOptions, PHCollection, PHFetchResult, NSPredicate;

@interface PXCollectionFetchOperation : NSOperation {

	id<PXCollectionFetchOperationDelegate> _delegate;
	PHFetchOptions* _fetchOptions;
	PHCollection* _collection;
	PHFetchResult* _outputFetchResult;
	NSPredicate* _assetsFilterPredicate;

}

@property (nonatomic,retain) PHFetchResult * outputFetchResult;                                   //@synthesize outputFetchResult=_outputFetchResult - In the implementation block
@property (assign,nonatomic,__weak) id<PXCollectionFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHFetchOptions * fetchOptions;                                       //@synthesize fetchOptions=_fetchOptions - In the implementation block
@property (nonatomic,readonly) PHCollection * collection;                                         //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSPredicate * assetsFilterPredicate;                               //@synthesize assetsFilterPredicate=_assetsFilterPredicate - In the implementation block
+(id)fetchOperationWithCollection:(id)arg1 delegate:(id)arg2 ;
-(PHCollection *)collection;
-(id)init;
-(id<PXCollectionFetchOperationDelegate>)delegate;
-(void)setDelegate:(id<PXCollectionFetchOperationDelegate>)arg1 ;
-(NSPredicate *)assetsFilterPredicate;
-(void)main;
-(PHFetchOptions *)fetchOptions;
-(void)setFetchOptions:(PHFetchOptions *)arg1 ;
-(void)handleFinish;
-(void)handleBegin;
-(id)initWithCollection:(id)arg1 assetsFilterPredicate:(id)arg2 ;
-(PHFetchResult *)outputFetchResult;
-(void)setOutputFetchResult:(PHFetchResult *)arg1 ;
@end

