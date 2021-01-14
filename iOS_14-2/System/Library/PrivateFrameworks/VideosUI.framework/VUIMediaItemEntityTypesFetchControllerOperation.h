/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(VUIMediaItemEntityTypesFetchControllerResult *)arg1 ;
-(void)executionDidBegin;
-(VUIMediaItemEntityTypesFetchControllerResult *)result;
-(long long)fetchReason;
-(void)setFetchReason:(long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2 ;
-(void)setCurrentFetchResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(VUIMediaItemEntityTypesFetchResponse *)currentFetchResponse;
@end

