/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface VCAudioRuleCollection : NSObject <NSCopying> {

	NSMutableArray* _rules;
	int _deviceRole;
	BOOL _allowAudioSwitching;
	BOOL _allowAudioRecording;
	int _aacBlockSize;
	NSMutableArray* _secondaryPayloads;

}

@property (assign,nonatomic) int aacBlockSize;                           //@synthesize aacBlockSize=_aacBlockSize - In the implementation block
@property (nonatomic,readonly) NSArray * rules;                          //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryPayloads;              //@synthesize secondaryPayloads=_secondaryPayloads - In the implementation block
@property (assign,nonatomic) BOOL allowAudioSwitching;                   //@synthesize allowAudioSwitching=_allowAudioSwitching - In the implementation block
@property (assign,nonatomic) BOOL allowAudioRecording;                   //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
+(int)getForcedPayload;
-(id)init;
-(void)setRules:(NSArray *)arg1 ;
-(NSArray *)rules;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)aacBlockSize;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)allowAudioRecording;
-(void)setAllowAudioRecording:(BOOL)arg1 ;
-(void)setupAudioRulesWithSBR:(BOOL)arg1 isContinuity:(BOOL)arg2 ;
-(void)addAudioPayload:(int)arg1 isSecondary:(BOOL)arg2 sbr:(BOOL)arg3 ;
-(void)addAudioRule:(id)arg1 ;
-(void)clearAudioRules;
-(void)addAudioRules:(id)arg1 ;
-(BOOL)allowAudioSwitching;
-(void)setAllowAudioSwitching:(BOOL)arg1 ;
-(void)setAacBlockSize:(int)arg1 ;
-(id)initWithPhoneContinuity:(BOOL)arg1 allowAudioSwitching:(BOOL)arg2 sbr:(BOOL)arg3 aacBlockSize:(int)arg4 ;
-(id)initPrimaryPayload:(int)arg1 dtxPayload:(int)arg2 redPayload:(int)arg3 secondaryPayloads:(id)arg4 allowAudioSwitching:(BOOL)arg5 sbr:(BOOL)arg6 aacBlockSize:(int)arg7 ;
-(BOOL)isPayloadSupported:(int)arg1 ;
-(NSArray *)secondaryPayloads;
@end

