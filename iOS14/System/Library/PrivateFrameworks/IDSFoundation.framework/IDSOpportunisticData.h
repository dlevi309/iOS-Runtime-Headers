/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, IDSOpportunisticOptions, NSMutableDictionary;

@interface IDSOpportunisticData : NSObject <NSSecureCoding> {

	NSData* _data;
	NSString* _identifier;
	NSString* _serviceName;
	NSString* _accountUniqueID;
	IDSOpportunisticOptions* _options;
	NSMutableDictionary* _sendCount;

}

@property (nonatomic,retain) NSMutableDictionary * sendCount;                //@synthesize sendCount=_sendCount - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                         //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSString * accountUniqueID;                     //@synthesize accountUniqueID=_accountUniqueID - In the implementation block
@property (nonatomic,retain) IDSOpportunisticOptions * options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isInvalid;
-(NSString *)accountUniqueID;
-(void)encodeWithCoder:(id)arg1 ;
-(IDSOpportunisticOptions *)options;
-(void)setOptions:(IDSOpportunisticOptions *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(id)copy;
-(NSData *)data;
-(id)initWithData:(id)arg1 identifier:(id)arg2 serviceName:(id)arg3 accountUniqueID:(id)arg4 options:(id)arg5 sendCount:(id)arg6 ;
-(id)initWithData:(id)arg1 identifier:(id)arg2 serviceName:(id)arg3 accountUniqueID:(id)arg4 options:(id)arg5 ;
-(void)markInvalid;
-(BOOL)shouldSendToDestination:(id)arg1 ;
-(void)incrementSendCountForDestination:(id)arg1 ;
-(long long)sendCountForURI:(id)arg1 ;
-(void)setAccountUniqueID:(NSString *)arg1 ;
-(void)setSendCount:(NSMutableDictionary *)arg1 ;
-(NSString *)serviceName;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setServiceName:(NSString *)arg1 ;
-(NSMutableDictionary *)sendCount;
@end

