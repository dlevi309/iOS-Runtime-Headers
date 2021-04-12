/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(AFMyriadPerceptualAudioHash *)perceptualAudioHash;
-(id)initWithTimestamp:(unsigned long long)arg1 perceptualAudioHash:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

