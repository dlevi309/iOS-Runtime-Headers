/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface FTRejectMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfPushToken;
	NSData* _peerPushToken;
	NSString* _peerID;
	NSNumber* _reason;

}

@property (copy) NSData * peerPushToken;              //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSData * selfPushToken;              //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSString * peerID;                   //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSNumber * reason;                   //@synthesize reason=_reason - In the implementation block
-(void)setPeerID:(NSString *)arg1 ;
-(NSString *)peerID;
-(id)requiredKeys;
-(NSNumber *)reason;
-(void)setReason:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)bagKey;
-(id)messageBody;
-(NSData *)peerPushToken;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(NSData *)selfPushToken;
@end

