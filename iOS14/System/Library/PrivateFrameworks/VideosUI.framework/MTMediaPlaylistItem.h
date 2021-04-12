/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class NSArray;


@protocol MTMediaPlaylistItem <NSObject>
@property (nonatomic,readonly) unsigned long long startOverallPosition; 
@property (nonatomic,readonly) unsigned long long overallPosition; 
@property (nonatomic,readonly) unsigned long long startPosition; 
@property (nonatomic,readonly) NSArray * eventData; 
@optional
-(NSArray *)eventData;
-(unsigned long long)startPosition;
-(unsigned long long)startOverallPosition;
-(unsigned long long)overallPosition;

@end

