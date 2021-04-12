/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <CoreFoundation/NSUserDefaults.h>

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults {

	PKServicePersonality* _personality;

}

@property (__weak) PKServicePersonality * personality;              //@synthesize personality=_personality - In the implementation block
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithPersonality:(id)arg1 ;
-(void)setPersonality:(PKServicePersonality *)arg1 ;
-(PKServicePersonality *)personality;
@end

