/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STVoiceControlStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class NSString;

@interface STMutableVoiceControlStatusDomainData : STVoiceControlStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (assign,getter=isVoiceControlActive,nonatomic) BOOL voiceControlActive; 
@property (assign,nonatomic) unsigned long long listeningState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)applyDiff:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVoiceControlActive:(BOOL)arg1 ;
-(void)setListeningState:(unsigned long long)arg1 ;
@end

