/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=isHighPriority,nonatomic,readonly) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)type;
+(id)discreteFeedbackForType:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isPlaying;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(unsigned long long)_effectiveEventType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_debugDictionary;
-(id)_playableProtocol;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)_effectiveSystemSoundID;
-(BOOL)isHighPriority;
@end

