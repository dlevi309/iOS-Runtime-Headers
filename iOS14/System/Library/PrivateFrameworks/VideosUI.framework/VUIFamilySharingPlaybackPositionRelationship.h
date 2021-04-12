/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIFamilySharingRelationship.h>

@class NSNumber, NSDate;

@interface VUIFamilySharingPlaybackPositionRelationship : VUIFamilySharingRelationship {

	NSNumber* _positionInMilliseconds;
	NSDate* _recordedAtTimestamp;

}

@property (nonatomic,retain) NSNumber * positionInMilliseconds;              //@synthesize positionInMilliseconds=_positionInMilliseconds - In the implementation block
@property (nonatomic,retain) NSDate * recordedAtTimestamp;                   //@synthesize recordedAtTimestamp=_recordedAtTimestamp - In the implementation block
-(NSNumber *)positionInMilliseconds;
-(void)setPositionInMilliseconds:(NSNumber *)arg1 ;
-(void)setRecordedAtTimestamp:(NSDate *)arg1 ;
-(NSDate *)recordedAtTimestamp;
@end

