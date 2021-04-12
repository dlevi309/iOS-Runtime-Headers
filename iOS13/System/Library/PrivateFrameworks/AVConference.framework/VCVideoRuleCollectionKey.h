/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCVideoRuleCollectionKey : NSObject <NSCopying> {

	int _payload;
	unsigned char _transportType;
	unsigned char _encodingType;

}

@property (nonatomic,readonly) int payload;                              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned char transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) unsigned char encodingType;               //@synthesize encodingType=_encodingType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)transportType;
-(int)payload;
-(unsigned char)encodingType;
-(id)initWithPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 ;
@end

