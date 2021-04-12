/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFMyriadPerceptualAudioHash;

@interface AFMyriadContext : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _timestamp;
	AFMyriadPerceptualAudioHash* _perceptualAudioHash;

}

@property (nonatomic,readonly) unsigned long long timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) AFMyriadPerceptualAudioHash * perceptualAudioHash;              //@synthesize perceptualAudioHash=_perceptualAudioHash - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(AFMyriadPerceptualAudioHash *)perceptualAudioHash;
-(id)initWithTimestamp:(unsigned long long)arg1 perceptualAudioHash:(id)arg2 ;
@end

