/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDate, NSData, NSUUID;

@interface RPIdentity : NSObject <NSSecureCoding> {

	BOOL _userAdded;
	BOOL _disabled;
	BOOL _present;
	int _type;
	unsigned _revisionID;
	NSArray* _accessGroups;
	NSString* _accountID;
	NSString* _contactID;
	NSDate* _dateAdded;
	NSDate* _dateRemoved;
	NSData* _deviceIRKData;
	NSData* _edPKData;
	NSData* _edSKData;
	unsigned long long _featureFlags;
	NSUUID* _homeKitUserIdentifier;
	NSString* _identifier;
	NSString* _idsDeviceID;
	NSString* _mediaRemoteID;
	NSString* _mediaRouteID;
	NSString* _model;
	NSString* _name;
	NSString* _sendersKnownAlias;
	NSDate* _dateAcknowledged;
	NSDate* _dateRequested;

}

@property (nonatomic,copy) NSDate * dateAcknowledged;                      //@synthesize dateAcknowledged=_dateAcknowledged - In the implementation block
@property (nonatomic,copy) NSDate * dateAdded;                             //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,copy) NSDate * dateRemoved;                           //@synthesize dateRemoved=_dateRemoved - In the implementation block
@property (nonatomic,copy) NSDate * dateRequested;                         //@synthesize dateRequested=_dateRequested - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) NSData * edSKData;                              //@synthesize edSKData=_edSKData - In the implementation block
@property (assign,nonatomic) unsigned long long featureFlags;              //@synthesize featureFlags=_featureFlags - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * mediaRemoteID;                       //@synthesize mediaRemoteID=_mediaRemoteID - In the implementation block
@property (nonatomic,copy) NSString * mediaRouteID;                        //@synthesize mediaRouteID=_mediaRouteID - In the implementation block
@property (assign,nonatomic) BOOL present;                                 //@synthesize present=_present - In the implementation block
@property (assign,nonatomic) unsigned revisionID;                          //@synthesize revisionID=_revisionID - In the implementation block
@property (nonatomic,copy) NSArray * accessGroups;                         //@synthesize accessGroups=_accessGroups - In the implementation block
@property (nonatomic,copy) NSString * accountID;                           //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * contactID;                           //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy) NSData * deviceIRKData;                         //@synthesize deviceIRKData=_deviceIRKData - In the implementation block
@property (nonatomic,copy) NSData * edPKData;                              //@synthesize edPKData=_edPKData - In the implementation block
@property (nonatomic,copy) NSUUID * homeKitUserIdentifier;                 //@synthesize homeKitUserIdentifier=_homeKitUserIdentifier - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceID;                         //@synthesize idsDeviceID=_idsDeviceID - In the implementation block
@property (nonatomic,copy) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sendersKnownAlias;                   //@synthesize sendersKnownAlias=_sendersKnownAlias - In the implementation block
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL userAdded;                               //@synthesize userAdded=_userAdded - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nullIdentity;
-(NSString *)accountID;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(id)initWithType:(int)arg1 ;
-(NSString *)model;
-(void)setAccessGroups:(NSArray *)arg1 ;
-(NSString *)contactID;
-(NSString *)mediaRemoteID;
-(void)setIdsDeviceID:(NSString *)arg1 ;
-(void)setEdPKData:(NSData *)arg1 ;
-(void)setSendersKnownAlias:(NSString *)arg1 ;
-(BOOL)signDataPtr:(const void*)arg1 dataLen:(unsigned long long)arg2 signatureBytes:(unsigned char)arg3 error:(id*)arg4 ;
-(void)setPresent:(BOOL)arg1 ;
-(NSData *)edPKData;
-(id)authTagForData:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(BOOL)present;
-(void)setDeviceIRKData:(NSData *)arg1 ;
-(NSString *)mediaRouteID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDateRemoved:(NSDate *)arg1 ;
-(unsigned)revisionID;
-(NSDate *)dateAcknowledged;
-(void)setType:(int)arg1 ;
-(void)setDateAdded:(NSDate *)arg1 ;
-(void)setDateRequested:(NSDate *)arg1 ;
-(NSString *)name;
-(unsigned)updateWithRPMessage:(id)arg1 error:(id*)arg2 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSString *)idsDeviceID;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(NSUUID *)homeKitUserIdentifier;
-(void)setEdSKData:(NSData *)arg1 ;
-(void)setHomeKitUserIdentifier:(NSUUID *)arg1 ;
-(BOOL)verifyAuthTag:(id)arg1 data:(id)arg2 type:(int)arg3 error:(id*)arg4 ;
-(BOOL)verifySignature:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(unsigned)updateWithKeychainItem:(id)arg1 error:(id*)arg2 ;
-(NSData *)deviceIRKData;
-(void)setDateAcknowledged:(NSDate *)arg1 ;
-(int)type;
-(BOOL)verifySignaturePtr:(const void*)arg1 signatureLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 error:(id*)arg5 ;
-(NSDate *)dateRequested;
-(void)setContactID:(NSString *)arg1 ;
-(void)setUserAdded:(BOOL)arg1 ;
-(void)setFeatureFlags:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)edSKData;
-(unsigned)compareWithRPIdentity:(id)arg1 ;
-(BOOL)verifyAuthTagPtr:(const void*)arg1 authTagLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 type:(int)arg5 error:(id*)arg6 ;
-(void)setRevisionID:(unsigned)arg1 ;
-(NSDate *)dateRemoved;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(void)setMediaRouteID:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)userAdded;
-(BOOL)disabled;
-(NSDate *)dateAdded;
-(void)setMediaRemoteID:(NSString *)arg1 ;
-(unsigned long long)featureFlags;
-(NSArray *)accessGroups;
-(NSString *)sendersKnownAlias;
@end

