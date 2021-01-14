/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class NSDictionary;

@interface VCSpotlightState : NSObject {

	unsigned long long _identifier;
	NSDictionary* _syncedShortcuts;

}

@property (nonatomic,readonly) unsigned long long identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * syncedShortcuts;              //@synthesize syncedShortcuts=_syncedShortcuts - In the implementation block
-(NSDictionary *)syncedShortcuts;
-(void)saveToPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)initWithIdentifier:(unsigned long long)arg1 syncedShortcuts:(id)arg2 ;
-(unsigned long long)identifier;
-(BOOL)isConsistentWithClientState:(unsigned long long)arg1 ;
@end

