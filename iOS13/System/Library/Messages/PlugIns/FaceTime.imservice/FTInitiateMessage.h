/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSNumber, NSArray, NSDictionary;

@interface FTInitiateMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfBlob;
	NSData* _selfPushToken;
	NSNumber* _selfNATType;
	NSData* _selfNatIP;
	NSArray* _peers;
	NSArray* _pushTokensToExclude;
	NSArray* _canonicalizedPeers;
	NSDictionary* _regionInformation;

}

@property (copy) NSData * selfBlob;                             //@synthesize selfBlob=_selfBlob - In the implementation block
@property (copy) NSData * selfPushToken;                        //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSNumber * selfNATType;                        //@synthesize selfNATType=_selfNATType - In the implementation block
@property (copy) NSData * selfNatIP;                            //@synthesize selfNatIP=_selfNatIP - In the implementation block
@property (copy) NSDictionary * regionInformation;              //@synthesize regionInformation=_regionInformation - In the implementation block
@property (copy) NSArray * peers;                               //@synthesize peers=_peers - In the implementation block
@property (copy) NSArray * canonicalizedPeers;                  //@synthesize canonicalizedPeers=_canonicalizedPeers - In the implementation block
@property (copy) NSArray * pushTokensToExclude;                 //@synthesize pushTokensToExclude=_pushTokensToExclude - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(NSArray *)peers;
-(void)setPeers:(NSArray *)arg1 ;
-(id)requiredKeys;
-(id)bagKey;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSArray *)canonicalizedPeers;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(void)setSelfNATType:(NSNumber *)arg1 ;
-(void)setSelfNatIP:(NSData *)arg1 ;
-(void)setSelfBlob:(NSData *)arg1 ;
-(void)setPushTokensToExclude:(NSArray *)arg1 ;
-(void)setRegionInformation:(NSDictionary *)arg1 ;
-(NSData *)selfPushToken;
-(NSNumber *)selfNATType;
-(NSData *)selfBlob;
-(NSDictionary *)regionInformation;
-(NSData *)selfNatIP;
-(NSArray *)pushTokensToExclude;
-(void)setCanonicalizedPeers:(NSArray *)arg1 ;
@end

