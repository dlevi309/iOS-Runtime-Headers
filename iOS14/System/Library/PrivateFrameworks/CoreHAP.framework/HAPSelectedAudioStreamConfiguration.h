/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPAudioStreamCodecConfiguration, NSString;

@interface HAPSelectedAudioStreamConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	HAPAudioStreamCodecConfiguration* _configuration;

}

@property (nonatomic,retain) HAPAudioStreamCodecConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(HAPAudioStreamCodecConfiguration *)configuration;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(HAPAudioStreamCodecConfiguration *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
@end

