/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaLibraryOperation.h>

@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchControllerResult;

@interface VUIMediaItemEntityTypesFetchControllerOperation : VUIMediaLibraryOperation {

	long long _fetchReason;
	VUIMediaItemEntityTypesFetchResponse* _currentFetchResponse;
	VUIMediaItemEntityTypesFetchControllerResult* _result;

}

@property (assign,nonatomic) long long fetchReason;                                                    //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchControllerResult * result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * currentFetchResponse;              //@synthesize currentFetchResponse=_currentFetchResponse - In the implementation block
+(id)_changeSetFromMediaItemEntityTypes:(id)arg1 toMediaItemEntityTypes:(id)arg2 ;
-(VUIMediaItemEntityTypesFetchControllerResult *)result;
-(void)setResult:(VUIMediaItemEntityTypesFetchControllerResult *)arg1 ;
-(void)executionDidBegin;
-(id)initWithMediaLibrary:(id)arg1 ;
-(long long)fetchReason;
-(id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2 ;
-(void)setCurrentFetchResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(void)setFetchReason:(long long)arg1 ;
-(VUIMediaItemEntityTypesFetchResponse *)currentFetchResponse;
@end

