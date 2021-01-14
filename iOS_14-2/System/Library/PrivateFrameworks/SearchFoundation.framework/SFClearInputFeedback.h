/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@interface SFClearInputFeedback : SFFeedback {

	unsigned long long _triggerEvent;

}

@property (assign,nonatomic) unsigned long long triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithEvent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)triggerEvent;
-(void)setTriggerEvent:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

