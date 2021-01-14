/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class NSDictionary, NSUserDefaults;

@interface ANDefaults : NSObject {

	NSDictionary* _defaultsItems;
	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                   //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultsItems;              //@synthesize defaultsItems=_defaultsItems - In the implementation block
+(id)sharedInstance;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)defaults;
-(id)init;
-(BOOL)boolForDefault:(id)arg1 ;
-(id)objectForDefault:(id)arg1 ;
-(id)numberForDefault:(id)arg1 ;
-(void)setObject:(id)arg1 forDefault:(id)arg2 ;
-(void)setNumber:(id)arg1 forDefault:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forDefault:(id)arg2 ;
-(NSDictionary *)defaultsItems;
@end

