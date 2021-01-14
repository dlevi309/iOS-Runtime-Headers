/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, NSData;

@interface FLFollowUpAction : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _label;
	NSURL* _url;
	NSDictionary* _userInfo;
	NSURL* _launchActionURL;
	NSData* _launchActionArguments;
	unsigned long long _eventSource;
	unsigned long long _sqlID;

}

@property (assign,nonatomic) unsigned long long eventSource;              //@synthesize eventSource=_eventSource - In the implementation block
@property (assign,nonatomic) unsigned long long sqlID;                    //@synthesize sqlID=_sqlID - In the implementation block
@property (nonatomic,retain) NSData * _userInfoData; 
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (copy) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (copy) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (copy) NSURL * launchActionURL;                                 //@synthesize launchActionURL=_launchActionURL - In the implementation block
@property (nonatomic,copy) NSData * launchActionArguments;                //@synthesize launchActionArguments=_launchActionArguments - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionWithLabel:(id)arg1 url:(id)arg2 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(unsigned long long)sqlID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(unsigned long long)eventSource;
-(id)description;
-(void)setEventSource:(unsigned long long)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSData *)_userInfoData;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)label;
-(void)set_userInfoData:(NSData *)arg1 ;
-(void)setSqlID:(unsigned long long)arg1 ;
-(BOOL)_loadActionURL;
-(id)initWithLabel:(id)arg1 url:(id)arg2 ;
-(NSURL *)launchActionURL;
-(NSData *)launchActionArguments;
-(void)setLaunchActionURL:(NSURL *)arg1 ;
-(void)setLaunchActionArguments:(NSData *)arg1 ;
@end

