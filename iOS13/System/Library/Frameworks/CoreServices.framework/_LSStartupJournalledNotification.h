/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithNotification:(int)arg1 appProxies:(id)arg2 plugins:(BOOL)arg3 ;
-(int)notification;
-(NSArray *)proxies;
-(BOOL)plugins;
@end

