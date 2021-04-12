/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@class NSData, NSDictionary;

@interface CBSpatialInteractionPeerInfoClient : NSObject {

	unsigned _peerID;
	unsigned _uwbTokenFlags;
	NSData* _tokenData;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) unsigned peerID;                     //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                    //@synthesize tokenData=_tokenData - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;               //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) unsigned uwbTokenFlags;              //@synthesize uwbTokenFlags=_uwbTokenFlags - In the implementation block
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setPeerID:(unsigned)arg1 ;
-(NSDictionary *)userInfo;
-(NSData *)tokenData;
-(unsigned)peerID;
-(unsigned)uwbTokenFlags;
-(void)setUwbTokenFlags:(unsigned)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
@end

