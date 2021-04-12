/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class NSMutableDictionary;

@interface ANAnalyticsDailyAnnouncements : NSObject {

	double _lastAccess;
	NSMutableDictionary* _homes;

}

@property (assign,nonatomic) double lastAccess;                        //@synthesize lastAccess=_lastAccess - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homes;              //@synthesize homes=_homes - In the implementation block
-(void)merge:(id)arg1 ;
-(double)lastAccess;
-(id)init;
-(void)setLastAccess:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(BOOL)shouldReport;
-(NSMutableDictionary *)homes;
-(unsigned long long)announcementsCount;
-(void)setHomes:(NSMutableDictionary *)arg1 ;
-(id)initWithLastAccess:(double)arg1 ;
-(unsigned long long)homesCount;
-(void)incrementCountInHome:(id)arg1 group:(id)arg2 ;
@end

