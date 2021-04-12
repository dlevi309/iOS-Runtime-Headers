/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSNumber;

@interface FTCancelMessage : FTFaceTimeMessage <NSCopying> {

	NSArray* _peers;
	NSNumber* _reason;

}

@property (copy) NSArray * peers;                //@synthesize peers=_peers - In the implementation block
@property (copy) NSNumber * reason;              //@synthesize reason=_reason - In the implementation block
-(NSArray *)peers;
-(id)requiredKeys;
-(NSNumber *)reason;
-(void)setPeers:(NSArray *)arg1 ;
-(void)setReason:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)bagKey;
-(id)messageBody;
@end

