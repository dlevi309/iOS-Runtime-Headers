/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class NSArray;

@interface _LSStartupJournalledNotification : NSObject {

	BOOL _plugins;
	int _notification;
	NSArray* _proxies;

}

@property (nonatomic,readonly) int notification;               //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSArray * proxies;              //@synthesize proxies=_proxies - In the implementation block
@property (nonatomic,readonly) BOOL plugins;                   //@synthesize plugins=_plugins - In the implementation block
-(BOOL)plugins;
-(id)initWithNotification:(int)arg1 appProxies:(id)arg2 plugins:(BOOL)arg3 ;
-(int)notification;
-(NSArray *)proxies;
@end

