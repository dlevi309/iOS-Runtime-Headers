/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


#import <TrustedPeers/TrustedPeers-Structs.h>
@class TPPeerPermanentInfo, TPPeerStableInfo, TPPeerDynamicInfo, NSData, NSString, NSSet;

@interface TPPeer : NSObject {

	TPPeerPermanentInfo* _permanentInfo;
	TPPeerStableInfo* _stableInfo;
	TPPeerDynamicInfo* _dynamicInfo;
	NSData* _wrappedPrivateKeys;

}

@property (nonatomic,retain) TPPeerPermanentInfo * permanentInfo;              //@synthesize permanentInfo=_permanentInfo - In the implementation block
@property (nonatomic,retain) TPPeerStableInfo * stableInfo;                    //@synthesize stableInfo=_stableInfo - In the implementation block
@property (nonatomic,retain) TPPeerDynamicInfo * dynamicInfo;                  //@synthesize dynamicInfo=_dynamicInfo - In the implementation block
@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,retain) NSData * wrappedPrivateKeys;                      //@synthesize wrappedPrivateKeys=_wrappedPrivateKeys - In the implementation block
@property (nonatomic,readonly) NSSet * trustedPeerIDs; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)peerID;
-(TPPeerPermanentInfo *)permanentInfo;
-(void)setPermanentInfo:(TPPeerPermanentInfo *)arg1 ;
-(TPPeerStableInfo *)stableInfo;
-(void)setStableInfo:(TPPeerStableInfo *)arg1 ;
-(id)initWithPermanentInfo:(id)arg1 ;
-(long long)updateStableInfo:(id)arg1 ;
-(long long)updateDynamicInfo:(id)arg1 ;
-(NSSet *)trustedPeerIDs;
-(TPPeerDynamicInfo *)dynamicInfo;
-(void)setDynamicInfo:(TPPeerDynamicInfo *)arg1 ;
-(NSData *)wrappedPrivateKeys;
-(void)setWrappedPrivateKeys:(NSData *)arg1 ;
@end

