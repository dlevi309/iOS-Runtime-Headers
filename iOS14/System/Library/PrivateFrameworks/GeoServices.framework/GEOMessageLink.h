/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isVerified;
-(NSString *)navTintColorString;
-(NSString *)messageURLString;
-(NSString *)navBackgroundColorString;
-(id)messageBusinessHours;
-(int)responseTime;
-(id)initWithMessageLink:(id)arg1 ;
-(NSString *)messageID;
@end

