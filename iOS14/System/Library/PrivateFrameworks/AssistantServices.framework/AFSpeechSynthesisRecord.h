/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSpeechSynthesisRecord : NSObject <NSCopying, NSSecureCoding> {

	NSString* _utterance;
	unsigned long long _beginTimestamp;
	unsigned long long _endTimestamp;

}

@property (nonatomic,copy,readonly) NSString * utterance;                      //@synthesize utterance=_utterance - In the implementation block
@property (nonatomic,readonly) unsigned long long beginTimestamp;              //@synthesize beginTimestamp=_beginTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long endTimestamp;                //@synthesize endTimestamp=_endTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSString *)utterance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)endTimestamp;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(unsigned long long)beginTimestamp;
-(id)initWithUtterance:(id)arg1 beginTimestamp:(unsigned long long)arg2 endTimestamp:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

