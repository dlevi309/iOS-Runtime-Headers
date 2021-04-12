/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableArray, VUIMediaStartTimeInfo, NSArray;

@interface VUIMediaStartTimeCollection : NSObject {

	NSMutableArray* _startTimeInfos;

}

@property (nonatomic,retain) NSMutableArray * startTimeInfos;                               //@synthesize startTimeInfos=_startTimeInfos - In the implementation block
@property (nonatomic,readonly) VUIMediaStartTimeInfo * preferredStartTimeInfo; 
@property (nonatomic,readonly) NSArray * allStartTimeInfos; 
+(void)initialize;
-(void)addStartTimeInfo:(id)arg1 ;
-(NSMutableArray *)startTimeInfos;
-(void)setStartTimeInfos:(NSMutableArray *)arg1 ;
-(void)removeAllStartTimeInfos;
-(NSArray *)allStartTimeInfos;
-(VUIMediaStartTimeInfo *)preferredStartTimeInfo;
@end

