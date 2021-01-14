/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPAudioCodecTypeWrapper, HAPAudioStreamCodecParameters, NSString;

@interface HAPAudioStreamCodecConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	HAPAudioCodecTypeWrapper* _codecType;
	HAPAudioStreamCodecParameters* _codecParameters;

}

@property (nonatomic,retain) HAPAudioCodecTypeWrapper * codecType;                         //@synthesize codecType=_codecType - In the implementation block
@property (nonatomic,retain) HAPAudioStreamCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HAPAudioCodecTypeWrapper *)codecType;
-(void)setCodecType:(HAPAudioCodecTypeWrapper *)arg1 ;
-(HAPAudioStreamCodecParameters *)codecParameters;
-(id)serializeWithError:(id*)arg1 ;
-(void)setCodecParameters:(HAPAudioStreamCodecParameters *)arg1 ;
-(id)initWithCodecType:(id)arg1 codecParameters:(id)arg2 ;
@end

