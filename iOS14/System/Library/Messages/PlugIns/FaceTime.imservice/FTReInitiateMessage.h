/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSNumber, NSArray, NSDictionary;

@interface FTReInitiateMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfBlob;
	NSData* _selfPushToken;
	NSNumber* _selfNATType;
	NSData* _selfNatIP;
	NSArray* _peers;
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
-(NSArray *)peers;
-(id)init;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
-(void)setPeers:(NSArray *)arg1 ;
-(NSData *)selfBlob;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)bagKey;
-(id)messageBody;
-(void)setSelfBlob:(NSData *)arg1 ;
-(NSArray *)canonicalizedPeers;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(void)setSelfNATType:(NSNumber *)arg1 ;
-(void)setSelfNatIP:(NSData *)arg1 ;
-(void)setRegionInformation:(NSDictionary *)arg1 ;
-(NSData *)selfPushToken;
-(NSNumber *)selfNATType;
-(NSDictionary *)regionInformation;
-(NSData *)selfNatIP;
-(void)setCanonicalizedPeers:(NSArray *)arg1 ;
@end

