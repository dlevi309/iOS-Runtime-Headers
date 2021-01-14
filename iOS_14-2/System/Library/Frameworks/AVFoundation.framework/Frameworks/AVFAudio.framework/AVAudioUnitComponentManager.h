/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSArray;

@interface AVAudioUnitComponentManager : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * tagNames; 
@property (nonatomic,readonly) NSArray * standardLocalizedTagNames; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedAudioUnitComponentManager;
+(void)privateAllocInitSingleton;
-(id)init;
-(NSArray *)tagNames;
-(void)localeChanged:(id)arg1 ;
-(void)registrationsChanged:(id)arg1 ;
-(NSArray *)standardLocalizedTagNames;
-(id)componentsPassingTest:(/*^block*/id)arg1 ;
-(id)componentsMatchingPredicate:(id)arg1 ;
-(id)componentsMatchingDescription:(AudioComponentDescription)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

