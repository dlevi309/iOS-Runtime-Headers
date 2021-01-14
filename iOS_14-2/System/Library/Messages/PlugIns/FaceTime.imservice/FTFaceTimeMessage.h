/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying> {

	NSData* _sessionToken;

}

@property (copy) NSData * sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
-(id)init;
-(void)setSessionToken:(NSData *)arg1 ;
-(BOOL)isValidMessage;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(id)requiredKeys;
-(NSData *)sessionToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)messageBody;
@end

