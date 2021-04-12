/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface DAESubscribedCalendarSummary : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _notes;
	NSString* _color;
	double _refreshInterval;
	NSString* _subscriptionID;
	NSURL* _subscriptionURL;

}

@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * notes;                       //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSString * color;                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double refreshInterval;                 //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (nonatomic,retain) NSString * subscriptionID;              //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (nonatomic,retain) NSURL * subscriptionURL;                //@synthesize subscriptionURL=_subscriptionURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)notes;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(NSString *)color;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subscriptionID;
-(void)setColor:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRefreshInterval:(double)arg1 ;
-(NSURL *)subscriptionURL;
-(double)refreshInterval;
-(NSString *)title;
-(void)setSubscriptionURL:(NSURL *)arg1 ;
@end

