/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class MNLocation, NSError, MNLocationMatchInfo, NSString;

@interface MNTraceLocationRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	MNLocation* _location;
	NSError* _error;
	MNLocationMatchInfo* _matchInfo;
	long long _locationEventType;
	unsigned long long _originalMatchType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) MNLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) MNLocationMatchInfo * matchInfo;                   //@synthesize matchInfo=_matchInfo - In the implementation block
@property (assign,nonatomic) long long locationEventType;                       //@synthesize locationEventType=_locationEventType - In the implementation block
@property (assign,nonatomic) unsigned long long originalMatchType;              //@synthesize originalMatchType=_originalMatchType - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)timestamp;
-(double)position;
-(MNLocation *)location;
-(void)setTimestamp:(double)arg1 ;
-(MNLocationMatchInfo *)matchInfo;
-(void)setLocation:(MNLocation *)arg1 ;
-(void)setMatchInfo:(MNLocationMatchInfo *)arg1 ;
-(long long)locationEventType;
-(void)setLocationEventType:(long long)arg1 ;
-(unsigned long long)originalMatchType;
-(void)setOriginalMatchType:(unsigned long long)arg1 ;
@end

