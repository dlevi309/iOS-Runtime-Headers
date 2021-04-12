/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class NSMutableArray, NSArray;

@interface ANAnalyticsGroup : NSObject {

	NSMutableArray* _announcements;
	NSMutableArray* _metadata;

}

@property (nonatomic,readonly) NSArray * announcements;              //@synthesize announcements=_announcements - In the implementation block
@property (nonatomic,readonly) NSArray * metadata;                   //@synthesize metadata=_metadata - In the implementation block
-(id)init;
-(NSArray *)metadata;
-(NSArray *)announcements;
-(void)addAnnouncement:(id)arg1 metadata:(id)arg2 ;
@end

