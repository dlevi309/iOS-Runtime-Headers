/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SUCoreConnectVersion, NSError, NSDictionary, NSSet;

@interface SUCoreConnectMessage : NSObject <NSSecureCoding> {

	long long _messageType;
	NSString* _messageName;
	SUCoreConnectVersion* _version;
	NSError* _error;
	NSDictionary* _message;
	NSString* _clientID;
	NSSet* _whitelistedClasses;

}

@property (nonatomic,readonly) long long messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain,readonly) NSString * messageName;                      //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,retain,readonly) NSString * clientID;                         //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain,readonly) SUCoreConnectVersion * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain,readonly) NSSet * whitelistedClasses;                  //@synthesize whitelistedClasses=_whitelistedClasses - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * message;                      //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)validateMessageDictionary:(id)arg1 ;
+(id)nameForMessageType:(long long)arg1 ;
-(NSString *)clientID;
-(long long)messageType;
-(NSDictionary *)message;
-(NSString *)messageName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(id)summary;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)whitelistedClasses;
-(SUCoreConnectVersion *)version;
-(id)initWithType:(long long)arg1 messageName:(id)arg2 clientID:(id)arg3 version:(id)arg4 message:(id)arg5 ;
@end

