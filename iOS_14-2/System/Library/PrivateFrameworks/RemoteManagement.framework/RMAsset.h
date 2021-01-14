/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, RMManagementChannel;

@interface RMAsset : NSObject <NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	NSString* _serverToken;
	NSData* _content;
	RMManagementChannel* _channel;

}

@property (nonatomic,copy,readonly) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverToken;                     //@synthesize serverToken=_serverToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * content;                           //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) RMManagementChannel * channel;              //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)content;
-(NSString *)serverToken;
-(void)encodeWithCoder:(id)arg1 ;
-(RMManagementChannel *)channel;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToAsset:(id)arg1 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 content:(id)arg4 channel:(id)arg5 ;
@end

