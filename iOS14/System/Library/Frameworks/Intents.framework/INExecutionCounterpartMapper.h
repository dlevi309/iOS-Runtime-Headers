/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


#import <Intents/Intents-Structs.h>
@class NSMutableDictionary;

@interface INExecutionCounterpartMapper : NSObject {

	BOOL _filled;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _mapping;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * _mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,readonly) BOOL _filled;                                     //@synthesize filled=_filled - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s _lock;                           //@synthesize lock=_lock - In the implementation block
+(void)initialize;
-(os_unfair_lock_s)_lock;
-(id)init;
-(NSMutableDictionary *)_mapping;
-(void)installedApplicationsDidChange:(id)arg1 ;
-(BOOL)_filled;
-(id)counterpartIdentifiersForLocalIdentifier:(id)arg1 ;
-(void)reset;
-(id)localIdentifiersForCounterpartIdentifier:(id)arg1 ;
-(id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
@end

