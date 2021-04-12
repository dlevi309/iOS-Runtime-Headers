/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDShareTokenMetadata : NSObject <NSCopying> {

	BOOL _forceDSRefetch;
	NSString* _routingKey;
	NSData* _shortSharingTokenData;
	NSData* _publicTokenData;
	NSData* _privateTokenData;

}

@property (nonatomic,retain) NSString * routingKey;                             //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenData;                    //@synthesize shortSharingTokenData=_shortSharingTokenData - In the implementation block
@property (nonatomic,readonly) NSString * shortSharingToken; 
@property (nonatomic,readonly) NSData * shortSharingTokenHashData; 
@property (assign,nonatomic) BOOL forceDSRefetch;                               //@synthesize forceDSRefetch=_forceDSRefetch - In the implementation block
@property (nonatomic,retain) NSData * publicTokenData;                          //@synthesize publicTokenData=_publicTokenData - In the implementation block
@property (nonatomic,retain) NSData * privateTokenData;                         //@synthesize privateTokenData=_privateTokenData - In the implementation block
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)shortSharingTokenData;
-(NSString *)shortSharingToken;
-(NSData *)shortSharingTokenHashData;
-(void)setPrivateTokenData:(NSData *)arg1 ;
-(void)setPublicTokenData:(NSData *)arg1 ;
-(BOOL)forceDSRefetch;
-(void)setForceDSRefetch:(BOOL)arg1 ;
-(NSData *)privateTokenData;
-(NSData *)publicTokenData;
-(void)setShortSharingTokenData:(NSData *)arg1 ;
@end

