/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MSVLyricsAgent *)agent;
-(void)setAgent:(MSVLyricsAgent *)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(double)startTime;
@end

