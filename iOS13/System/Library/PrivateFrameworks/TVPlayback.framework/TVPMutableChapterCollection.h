/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPChapterCollection.h>

@class NSString, NSArray, NSDate, NSURL;

@interface TVPMutableChapterCollection : TVPChapterCollection

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * chapters; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,retain) id backingData; 
@property (nonatomic,retain) NSDate * startDate; 
@property (assign,nonatomic) BOOL shouldStartPlaybackFromStartDate; 
@property (assign,nonatomic) BOOL shouldDisplayChapterMarkers; 
@property (assign,nonatomic) BOOL shouldShowDescriptionOnChapterSkip; 
@property (assign,nonatomic) double refreshInterval; 
@property (nonatomic,copy) NSURL * refreshURL; 
@end

