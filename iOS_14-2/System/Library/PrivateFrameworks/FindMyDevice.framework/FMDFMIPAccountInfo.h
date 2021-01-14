/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface FMDFMIPAccountInfo : NSObject <NSSecureCoding> {

	NSString* _username;
	NSString* _dsid;
	NSString* _oneTimeRemoveAuthToken;
	NSURL* _serverURL;

}

@property (nonatomic,copy) NSString * username;                            //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * dsid;                                //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * oneTimeRemoveAuthToken;              //@synthesize oneTimeRemoveAuthToken=_oneTimeRemoveAuthToken - In the implementation block
@property (copy) NSURL * serverURL;                                        //@synthesize serverURL=_serverURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)username;
-(NSURL *)serverURL;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)oneTimeRemoveAuthToken;
-(void)setOneTimeRemoveAuthToken:(NSString *)arg1 ;
-(id)initWithUserName:(id)arg1 dsid:(id)arg2 oneTimeRemoveAuthToken:(id)arg3 serverURL:(id)arg4 ;
@end

