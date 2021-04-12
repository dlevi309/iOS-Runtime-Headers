/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDMessageLink, NSTimeZone, NSString;

@interface GEOMessageLink : NSObject {

	GEOPDMessageLink* _messageLink;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) NSString * messageID; 
@property (nonatomic,readonly) NSString * messageURLString; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) NSString * navBackgroundColorString; 
@property (nonatomic,readonly) NSString * navTintColorString; 
-(NSTimeZone *)timeZone;
-(NSString *)messageID;
-(int)responseTime;
-(BOOL)isVerified;
-(id)initWithMessageLink:(id)arg1 ;
-(NSString *)messageURLString;
-(NSString *)navBackgroundColorString;
-(NSString *)navTintColorString;
-(id)messageBusinessHours;
@end

