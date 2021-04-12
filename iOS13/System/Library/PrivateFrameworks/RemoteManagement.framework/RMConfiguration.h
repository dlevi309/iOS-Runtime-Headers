/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, RMManagementChannel, NSDictionary;

@interface RMConfiguration : NSObject <NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	NSString* _serverToken;
	NSData* _content;
	RMManagementChannel* _channel;
	NSDictionary* _assetByIdentifier;

}

@property (nonatomic,copy,readonly) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverToken;                        //@synthesize serverToken=_serverToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * content;                              //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) RMManagementChannel * channel;                 //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * assetByIdentifier;              //@synthesize assetByIdentifier=_assetByIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(RMManagementChannel *)channel;
-(NSData *)content;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(NSString *)serverToken;
-(id)initWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 content:(id)arg4 channel:(id)arg5 assetByIdentifier:(id)arg6 ;
-(NSDictionary *)assetByIdentifier;
@end

