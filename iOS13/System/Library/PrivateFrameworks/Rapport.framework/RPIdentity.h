/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDate, NSData;

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
@property (nonatomic,copy) NSString * idsDeviceID;                         //@synthesize idsDeviceID=_idsDeviceID - In the implementation block
@property (nonatomic,copy) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sendersKnownAlias;                   //@synthesize sendersKnownAlias=_sendersKnownAlias - In the implementation block
@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL userAdded;                               //@synthesize userAdded=_userAdded - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nullIdentity;
-(id)description;
-(NSString *)name;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)model;
-(id)initWithType:(int)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)contactID;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)present;
-(NSString *)accountID;
-(void)setAccountID:(NSString *)arg1 ;
-(unsigned)revisionID;
-(void)setRevisionID:(unsigned)arg1 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setPresent:(BOOL)arg1 ;
-(NSData *)deviceIRKData;
-(void)setContactID:(NSString *)arg1 ;
-(NSString *)sendersKnownAlias;
-(void)setSendersKnownAlias:(NSString *)arg1 ;
-(NSString *)idsDeviceID;
-(NSString *)mediaRemoteID;
-(NSString *)mediaRouteID;
-(NSDate *)dateAdded;
-(void)setEdPKData:(NSData *)arg1 ;
-(BOOL)verifySignature:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setEdSKData:(NSData *)arg1 ;
-(NSArray *)accessGroups;
-(NSData *)edPKData;
-(NSData *)edSKData;
-(BOOL)verifyAuthTagPtr:(const void*)arg1 authTagLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 type:(int)arg5 error:(id*)arg6 ;
-(BOOL)signDataPtr:(const void*)arg1 dataLen:(unsigned long long)arg2 signatureBytes:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)verifySignaturePtr:(const void*)arg1 signatureLen:(unsigned long long)arg2 dataPtr:(const void*)arg3 dataLen:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned)compareWithRPIdentity:(id)arg1 ;
-(unsigned)updateWithKeychainItem:(id)arg1 error:(id*)arg2 ;
-(unsigned)updateWithRPMessage:(id)arg1 error:(id*)arg2 ;
-(id)authTagForData:(id)arg1 type:(int)arg2 error:(id*)arg3 ;
-(BOOL)verifyAuthTag:(id)arg1 data:(id)arg2 type:(int)arg3 error:(id*)arg4 ;
-(void)setAccessGroups:(NSArray *)arg1 ;
-(void)setDateAdded:(NSDate *)arg1 ;
-(NSDate *)dateRemoved;
-(void)setDateRemoved:(NSDate *)arg1 ;
-(void)setDeviceIRKData:(NSData *)arg1 ;
-(unsigned long long)featureFlags;
-(void)setFeatureFlags:(unsigned long long)arg1 ;
-(void)setIdsDeviceID:(NSString *)arg1 ;
-(void)setMediaRemoteID:(NSString *)arg1 ;
-(void)setMediaRouteID:(NSString *)arg1 ;
-(BOOL)userAdded;
-(void)setUserAdded:(BOOL)arg1 ;
-(NSDate *)dateAcknowledged;
-(void)setDateAcknowledged:(NSDate *)arg1 ;
-(NSDate *)dateRequested;
-(void)setDateRequested:(NSDate *)arg1 ;
@end

