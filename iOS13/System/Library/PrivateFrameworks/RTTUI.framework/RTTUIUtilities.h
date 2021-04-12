/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/


@protocol OS_dispatch_queue;
#import <RTTUI/RTTUI-Structs.h>
@class NSNumber, NSObject;

@interface RTTUIUtilities : NSObject {

	BOOL _inUnitTestMode;
	BOOL _headphoneJackSupportsTTY;
	NSNumber* _overrideLTR;
	NSObject*<OS_dispatch_queue> _callCenterQueue;

}

@property (assign,nonatomic) BOOL headphoneJackSupportsTTY;                             //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callCenterQueue;              //@synthesize callCenterQueue=_callCenterQueue - In the implementation block
@property (assign,nonatomic) BOOL inUnitTestMode;                                       //@synthesize inUnitTestMode=_inUnitTestMode - In the implementation block
@property (nonatomic,retain) NSNumber * overrideLTR;                                    //@synthesize overrideLTR=_overrideLTR - In the implementation block
+(BOOL)softwareTTYIsSupported;
+(BOOL)hardwareTTYIsSupported;
+(id)sharedUtilityProvider;
+(BOOL)isRTTSupported;
+(BOOL)isOnlyRTTSupported;
+(BOOL)shouldUseRTT;
+(BOOL)relayIsSupported;
+(id)relayPhoneNumber;
+(BOOL)contactIsTTYContact:(id)arg1 ;
+(void)displayCallPromptForContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)cancelCallPromptDisplay;
+(BOOL)ttyShouldBeRealtimeForCall:(id)arg1 ;
+(id)ASCIINumericStringFromString:(CFStringRef)arg1 ;
+(void)contactIsTTYContact:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
+(id)phoneNumberStringFromString:(id)arg1 ;
-(id)init;
-(void)setInUnitTestMode:(BOOL)arg1 ;
-(BOOL)inUnitTestMode;
-(unsigned long long)currentPreferredTransportMethod;
-(id)conversationForCallUID:(id)arg1 ;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(void)setHeadphoneJackSupportsTTY:(BOOL)arg1 ;
-(BOOL)headphoneJackSupportsTTY;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(id)myPhoneNumber;
-(id)ttyMeContact;
-(UIEdgeInsets)bubbleInsetForMe:(BOOL)arg1 ;
-(id)transcriptStringForConversation:(id)arg1 ;
-(long long)textAlignmentForMe:(BOOL)arg1 ;
-(UIEdgeInsets)textInsetForMe:(BOOL)arg1 ;
-(id)bubbleFillForMe:(BOOL)arg1 ;
-(void)setCallCenterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSNumber *)overrideLTR;
-(id)ttyIconWithTint:(id)arg1 ;
-(id)bubbleColorForMe:(BOOL)arg1 ;
-(id)largeTTYIconWithTint:(id)arg1 ;
-(id)tintedTTYIcon;
-(void)setOverrideLTR:(NSNumber *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callCenterQueue;
@end

