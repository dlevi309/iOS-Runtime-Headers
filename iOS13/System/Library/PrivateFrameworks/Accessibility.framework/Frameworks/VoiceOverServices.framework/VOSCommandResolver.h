/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <VoiceOverServices/VoiceOverServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, VOSScreenreaderMode;

@interface VOSCommandResolver : NSObject <NSCopying> {

	NSNumber* _cachedPressCount;
	NSNumber* _cachedContext;
	BOOL _shouldApplyRTL;
	VOSScreenreaderMode* _screenreaderMode;
	unsigned long long _keyboardMode;
	unsigned long long _host;
	unsigned long long _bsiTypingMode;
	/*^block*/id _fetchPressCountBlock;
	/*^block*/id _fetchContextBlock;
	/*^block*/id _resolvingEventOccurredBlock;

}

@property (nonatomic,retain) VOSScreenreaderMode * screenreaderMode;              //@synthesize screenreaderMode=_screenreaderMode - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultScreenreaderMode; 
@property (nonatomic,readonly) BOOL isHandwritingScreenreaderMode; 
@property (nonatomic,readonly) BOOL isBSIScreenreaderMode; 
@property (assign,nonatomic) BOOL shouldApplyRTL;                                 //@synthesize shouldApplyRTL=_shouldApplyRTL - In the implementation block
@property (assign,nonatomic) unsigned long long keyboardMode;                     //@synthesize keyboardMode=_keyboardMode - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultKeyboardMode; 
@property (nonatomic,readonly) BOOL isQuickNavKeyboardMode; 
@property (assign,nonatomic) unsigned long long host;                             //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) BOOL isIPad; 
@property (nonatomic,readonly) BOOL isIPhone; 
@property (nonatomic,readonly) BOOL isWatch; 
@property (nonatomic,readonly) BOOL isAppleTV; 
@property (nonatomic,readonly) BOOL isHomePod; 
@property (assign,nonatomic) unsigned long long bsiTypingMode;                    //@synthesize bsiTypingMode=_bsiTypingMode - In the implementation block
@property (nonatomic,readonly) long long pressCount; 
@property (nonatomic,copy) id fetchPressCountBlock;                               //@synthesize fetchPressCountBlock=_fetchPressCountBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long context; 
@property (nonatomic,copy) id fetchContextBlock;                                  //@synthesize fetchContextBlock=_fetchContextBlock - In the implementation block
@property (nonatomic,copy) id resolvingEventOccurredBlock;                        //@synthesize resolvingEventOccurredBlock=_resolvingEventOccurredBlock - In the implementation block
+(unsigned long long)currentHost;
+(id)resolverForCurrentHost;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)host;
-(unsigned long long)context;
-(void)setHost:(unsigned long long)arg1 ;
-(BOOL)isHomePod;
-(BOOL)isWatch;
-(BOOL)isAppleTV;
-(BOOL)isIPhone;
-(BOOL)isIPad;
-(void)setScreenreaderMode:(VOSScreenreaderMode *)arg1 ;
-(VOSScreenreaderMode *)screenreaderMode;
-(unsigned long long)keyboardMode;
-(id)fetchPressCountBlock;
-(id)fetchContextBlock;
-(BOOL)shouldApplyRTL;
-(unsigned long long)bsiTypingMode;
-(long long)pressCount;
-(void)setShouldApplyRTL:(BOOL)arg1 ;
-(void)setKeyboardMode:(unsigned long long)arg1 ;
-(void)setBsiTypingMode:(unsigned long long)arg1 ;
-(void)setFetchPressCountBlock:(id)arg1 ;
-(void)setFetchContextBlock:(id)arg1 ;
-(id)resolvingEventOccurredBlock;
-(void)setResolvingEventOccurredBlock:(id)arg1 ;
-(id)resolverWithScreenreaderModeVariant:(id)arg1 ;
-(BOOL)isDefaultScreenreaderMode;
-(BOOL)isBSIScreenreaderMode;
-(BOOL)isHandwritingScreenreaderMode;
-(BOOL)isDefaultKeyboardMode;
-(BOOL)isQuickNavKeyboardMode;
@end

