/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCVideoRuleCollectionKey : NSObject <NSCopying> {

	unsigned char _transportType;
	unsigned char _encodingType;
	int _payload;

}

@property (nonatomic,readonly) int payload;                              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned char transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) unsigned char encodingType;               //@synthesize encodingType=_encodingType - In the implementation block
-(unsigned char)transportType;
-(int)payload;
-(id)description;
-(unsigned char)encodingType;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 ;
@end

