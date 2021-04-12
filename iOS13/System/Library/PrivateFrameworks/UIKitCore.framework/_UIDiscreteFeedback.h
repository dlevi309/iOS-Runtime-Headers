/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedback.h>
#import <UIKitCore/_UIFeedbackDiscretePlayable.h>

@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable> {

	BOOL _highPriority;
	long long _type;

}

@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isHighPriority,nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
+(id)type;
+(BOOL)supportsSecureCoding;
+(id)discreteFeedbackForType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)_effectiveSystemSoundID;
-(unsigned long long)_effectiveEventType;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_debugDictionary;
-(id)_playableProtocol;
-(BOOL)isPlaying;
-(BOOL)isHighPriority;
@end

