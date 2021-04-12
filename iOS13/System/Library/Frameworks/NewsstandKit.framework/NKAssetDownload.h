/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NKIssue, NSString, NSData, NSURLRequest, NSURLConnection, NSDictionary;

@interface NKAssetDownload : NSObject <NSSecureCoding> {

	NKIssue* _issue;
	NSString* _identifier;
	NSData* _userInfoData;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	BOOL _attemptedConnection;
	BOOL _isDecodingValid;

}

@property (copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSURLRequest * URLRequest;                   //@synthesize request=_request - In the implementation block
@property (retain) NSData * userInfoData;                     //@synthesize userInfoData=_userInfoData - In the implementation block
@property (retain) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL attemptedConnection;                  //@synthesize attemptedConnection=_attemptedConnection - In the implementation block
@property (__weak,readonly) NKIssue * issue;                  //@synthesize issue=_issue - In the implementation block
@property (copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_connection;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSData *)userInfoData;
-(void)setUserInfoData:(NSData *)arg1 ;
-(void)_cancel;
-(NSURLRequest *)URLRequest;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
-(NKIssue *)issue;
-(BOOL)_attemptedConnection;
-(BOOL)_isDecodingValid;
-(void)_issueWasRemovedFromLibrary;
-(void)_setIssue:(id)arg1 ;
-(id)_initWithURLRequest:(id)arg1 issue:(id)arg2 ;
-(void)setIssue:(NKIssue *)arg1 ;
-(BOOL)attemptedConnection;
-(void)_connectionBackgroundDownloadPreCompleted:(id)arg1 ;
-(void)_connectionBackgroundDownloadPostCompleted:(id)arg1 ;
-(void)setAttemptedConnection:(BOOL)arg1 ;
-(id)downloadWithDelegate:(id)arg1 ;
@end

