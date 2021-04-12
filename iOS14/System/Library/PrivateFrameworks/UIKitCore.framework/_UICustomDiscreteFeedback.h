/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)customDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned)arg2 ;
+(id)type;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)eventType;
-(unsigned)systemSoundID;
-(unsigned long long)_effectiveEventType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)_effectiveSystemSoundID;
@end

