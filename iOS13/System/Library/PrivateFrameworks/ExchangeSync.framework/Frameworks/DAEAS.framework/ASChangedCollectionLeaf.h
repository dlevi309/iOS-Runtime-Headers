/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDictionary;

@interface ASChangedCollectionLeaf : ASItem <NSSecureCoding> {

	BOOL _isResponse;
	BOOL _validateOpeningTokens;
	unsigned long long _changeType;
	NSString* _serverID;
	NSString* _instanceID;
	NSString* _clientID;
	NSString* _parentClientID;
	NSNumber* _status;
	NSDictionary* _applicationData;

}

@property (assign,nonatomic) BOOL isResponse;                             //@synthesize isResponse=_isResponse - In the implementation block
@property (assign,nonatomic) BOOL validateOpeningTokens;                  //@synthesize validateOpeningTokens=_validateOpeningTokens - In the implementation block
@property (assign,nonatomic) unsigned long long changeType;               //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * serverID;                         //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,retain) NSString * instanceID;                       //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,copy) NSString * clientID;                           //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy) NSString * parentClientID;                     //@synthesize parentClientID=_parentClientID - In the implementation block
@property (nonatomic,copy) NSNumber * status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDictionary * applicationData;              //@synthesize applicationData=_applicationData - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)changeType;
-(NSNumber *)status;
-(BOOL)isResponse;
-(void)setIsResponse:(BOOL)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(void)setChangeType:(unsigned long long)arg1 ;
-(NSDictionary *)applicationData;
-(void)setApplicationData:(NSDictionary *)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(long long)dataclass;
-(NSString *)instanceID;
-(void)setInstanceID:(NSString *)arg1 ;
-(void)loadClientIDs;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(void)setValidateOpeningTokens:(BOOL)arg1 ;
-(BOOL)validateOpeningTokens;
-(NSString *)parentClientID;
-(void)setParentClientID:(NSString *)arg1 ;
@end

