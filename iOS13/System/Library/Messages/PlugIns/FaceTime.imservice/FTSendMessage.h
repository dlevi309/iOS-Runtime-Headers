/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSNumber, NSData;

@interface FTSendMessage : FTFaceTimeMessage <NSCopying> {

	NSArray* _peers;
	NSNumber* _reason;
	NSData* _selfPushToken;

}

@property (copy) NSArray * peers;                     //@synthesize peers=_peers - In the implementation block
@property (copy) NSNumber * reason;                   //@synthesize reason=_reason - In the implementation block
@property (copy) NSData * selfPushToken;              //@synthesize selfPushToken=_selfPushToken - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(void)setReason:(NSNumber *)arg1 ;
-(id)messageBody;
-(NSArray *)peers;
-(void)setPeers:(NSArray *)arg1 ;
-(id)requiredKeys;
-(id)bagKey;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(NSData *)selfPushToken;
@end

