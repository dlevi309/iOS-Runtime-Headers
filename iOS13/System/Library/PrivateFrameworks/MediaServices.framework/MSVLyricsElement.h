/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MSVLyricsXMLElement.h>

@class MSVLyricsAgent;

@interface MSVLyricsElement : MSVLyricsXMLElement {

	long long _type;
	double _startTime;
	double _endTime;
	MSVLyricsAgent* _agent;

}

@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                      //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) MSVLyricsAgent * agent;              //@synthesize agent=_agent - In the implementation block
+(id)_descriptionForElementType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(MSVLyricsAgent *)agent;
-(void)setAgent:(MSVLyricsAgent *)arg1 ;
@end

