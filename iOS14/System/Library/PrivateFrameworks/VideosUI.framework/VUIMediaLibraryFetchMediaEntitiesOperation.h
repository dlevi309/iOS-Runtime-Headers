/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executionDidBegin;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(void)setResponses:(NSArray *)arg1 ;
-(NSArray *)responses;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
-(id)initWithMediaLibrary:(id)arg1 ;
@end

