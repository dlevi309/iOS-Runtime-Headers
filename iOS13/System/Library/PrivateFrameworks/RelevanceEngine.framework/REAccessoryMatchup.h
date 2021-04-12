/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REImage, NSString, NSDate;

@interface REAccessoryMatchup : NSObject <NSCopying, NSSecureCoding> {

	REImage* _homeTeamImage;
	NSString* _homeTeamName;
	NSString* _homeTeamDetail;
	REImage* _awayTeamImage;
	NSString* _awayTeamName;
	NSString* _awayTeamDetail;
	NSString* _matchupProgress;
	unsigned long long _status;
	NSDate* _matchupStartDate;
	NSDate* _matchupDateFetched;

}

@property (nonatomic,readonly) REImage * homeTeamImage;                  //@synthesize homeTeamImage=_homeTeamImage - In the implementation block
@property (nonatomic,readonly) NSString * homeTeamName;                  //@synthesize homeTeamName=_homeTeamName - In the implementation block
@property (nonatomic,readonly) NSString * homeTeamDetail;                //@synthesize homeTeamDetail=_homeTeamDetail - In the implementation block
@property (nonatomic,readonly) REImage * awayTeamImage;                  //@synthesize awayTeamImage=_awayTeamImage - In the implementation block
@property (nonatomic,readonly) NSString * awayTeamName;                  //@synthesize awayTeamName=_awayTeamName - In the implementation block
@property (nonatomic,readonly) NSString * awayTeamDetail;                //@synthesize awayTeamDetail=_awayTeamDetail - In the implementation block
@property (nonatomic,readonly) NSString * matchupProgress;               //@synthesize matchupProgress=_matchupProgress - In the implementation block
@property (nonatomic,readonly) unsigned long long status;                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDate * matchupStartDate;                //@synthesize matchupStartDate=_matchupStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * matchupDateFetched;              //@synthesize matchupDateFetched=_matchupDateFetched - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)status;
-(id)initWithHomeTeamImage:(id)arg1 homeTeamName:(id)arg2 homeTeamDetail:(id)arg3 awayTeamImage:(id)arg4 awayTeamName:(id)arg5 awayTeamDetail:(id)arg6 progress:(id)arg7 startDate:(id)arg8 status:(unsigned long long)arg9 dateFetched:(id)arg10 ;
-(REImage *)homeTeamImage;
-(NSString *)homeTeamName;
-(NSString *)homeTeamDetail;
-(REImage *)awayTeamImage;
-(NSString *)awayTeamName;
-(NSString *)awayTeamDetail;
-(NSString *)matchupProgress;
-(NSDate *)matchupStartDate;
-(NSDate *)matchupDateFetched;
@end

