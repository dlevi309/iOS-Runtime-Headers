/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMAccount.h>
#import <libobjc.A.dylib/EMDeliveryAccountBuilder.h>

@class NSString;

@interface EMDeliveryAccount : EMAccount <EMDeliveryAccountBuilder> {

	BOOL _primaryiCloudAccount;
	NSString* _name;
	NSString* _username;
	NSString* _hostname;
	unsigned long long _maximumMessageBytes;

}

@property (assign,nonatomic) unsigned long long maximumMessageBytes;                               //@synthesize maximumMessageBytes=_maximumMessageBytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * username;                                                    //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * hostname;                                                    //@synthesize hostname=_hostname - In the implementation block
@property (assign,getter=isPrimaryiCloudAccount,nonatomic) BOOL primaryiCloudAccount;              //@synthesize primaryiCloudAccount=_primaryiCloudAccount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hostname;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(unsigned long long)maximumMessageBytes;
-(void)setMaximumMessageBytes:(unsigned long long)arg1 ;
-(BOOL)isPrimaryiCloudAccount;
-(void)setPrimaryiCloudAccount:(BOOL)arg1 ;
-(void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(/*^block*/id)arg3 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(/*^block*/id)arg4 ;
@end

