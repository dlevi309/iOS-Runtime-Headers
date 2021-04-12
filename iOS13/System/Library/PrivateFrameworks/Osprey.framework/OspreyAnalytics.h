/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class NSMutableDictionary;

@interface OspreyAnalytics : NSObject {

	NSMutableDictionary* _absintheTimestamps;

}

@property (nonatomic,retain) NSMutableDictionary * absintheTimestamps;              //@synthesize absintheTimestamps=_absintheTimestamps - In the implementation block
+(id)reporter;
-(id)init;
-(void)reportEvent:(id)arg1 payload:(id)arg2 ;
-(void)setAbsintheAuthenticationTimestampForKey:(id)arg1 ;
-(void)setAbsintheTimestamps:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)absintheTimestamps;
-(id)calculateDuration:(id)arg1 and:(id)arg2 ;
-(void)reportAbsintheAuthenticationDurations;
@end

