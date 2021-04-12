/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <CoreFoundation/NSUserDefaults.h>

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults {

	PKServicePersonality* _personality;

}

@property (__weak) PKServicePersonality * personality;              //@synthesize personality=_personality - In the implementation block
-(id)initWithPersonality:(id)arg1 ;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setPersonality:(PKServicePersonality *)arg1 ;
-(PKServicePersonality *)personality;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

