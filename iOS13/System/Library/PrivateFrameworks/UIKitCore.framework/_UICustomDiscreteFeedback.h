/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDiscreteFeedback.h>

@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback {

	unsigned _systemSoundID;
	unsigned long long _eventType;

}

@property (nonatomic,readonly) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) unsigned systemSoundID;                    //@synthesize systemSoundID=_systemSoundID - In the implementation block
+(id)type;
+(id)customDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)eventType;
-(unsigned)_effectiveSystemSoundID;
-(unsigned long long)_effectiveEventType;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned)systemSoundID;
@end
