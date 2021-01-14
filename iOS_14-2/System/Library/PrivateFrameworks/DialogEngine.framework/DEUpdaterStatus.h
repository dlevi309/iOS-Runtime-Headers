/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString;

@interface DEUpdaterStatus : NSObject {

	BOOL _upToDate;
	BOOL _disabled;
	BOOL _loggedEvent;
	NSString* _publicationId;
	NSString* _version;

}

@property (nonatomic,retain) NSString * publicationId;              //@synthesize publicationId=_publicationId - In the implementation block
@property (assign,nonatomic) BOOL upToDate;                         //@synthesize upToDate=_upToDate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                         //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) NSString * version;                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL loggedEvent;                      //@synthesize loggedEvent=_loggedEvent - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(void)setUpToDate:(BOOL)arg1 ;
-(BOOL)loggedEvent;
-(void)setLoggedEvent:(BOOL)arg1 ;
-(BOOL)upToDate;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)publicationId;
-(void)setPublicationId:(NSString *)arg1 ;
-(BOOL)disabled;
-(NSString *)version;
-(id)initWithPublicationId:(id)arg1 upToDate:(BOOL)arg2 version:(id)arg3 ;
-(void)logCoreAnalyticsEvent;
@end

