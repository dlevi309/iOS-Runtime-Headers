/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class NSString;

@interface STVoiceControlStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	BOOL _voiceControlActive;
	unsigned long long _listeningState;

}

@property (getter=isVoiceControlActive,nonatomic,readonly) BOOL voiceControlActive;              //@synthesize voiceControlActive=_voiceControlActive - In the implementation block
@property (nonatomic,readonly) unsigned long long listeningState;                                //@synthesize listeningState=_listeningState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)diffFromData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)dataByApplyingDiff:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isVoiceControlActive;
-(unsigned long long)listeningState;
-(id)initWithVoiceControlActive:(BOOL)arg1 listeningState:(unsigned long long)arg2 ;
@end

