/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class NSArray;


@protocol MTMediaPlaylistItem <NSObject>
@property (nonatomic,readonly) unsigned long long startOverallPosition; 
@property (nonatomic,readonly) unsigned long long overallPosition; 
@property (nonatomic,readonly) long long startPosition; 
@property (nonatomic,readonly) NSArray * eventData; 
@optional
-(long long)startPosition;
-(NSArray *)eventData;
-(unsigned long long)startOverallPosition;
-(unsigned long long)overallPosition;

@end

