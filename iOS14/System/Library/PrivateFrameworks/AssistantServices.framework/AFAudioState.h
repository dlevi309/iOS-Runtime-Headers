/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AFAudioState : NSObject <NSCopying, NSSecureCoding> {

	unsigned _audioSessionID;

}

@property (assign,nonatomic) unsigned audioSessionID;              //@synthesize audioSessionID=_audioSessionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)audioSessionID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
@end

