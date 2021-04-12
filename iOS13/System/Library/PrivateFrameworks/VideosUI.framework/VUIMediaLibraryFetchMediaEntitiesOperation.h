/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaLibraryOperation.h>

@class NSArray;

@interface VUIMediaLibraryFetchMediaEntitiesOperation : VUIMediaLibraryOperation {

	NSArray* _responses;
	NSArray* _requests;

}

@property (nonatomic,copy) NSArray * responses;              //@synthesize responses=_responses - In the implementation block
@property (nonatomic,copy) NSArray * requests;               //@synthesize requests=_requests - In the implementation block
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(void)executionDidBegin;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
-(id)initWithMediaLibrary:(id)arg1 ;
@end

