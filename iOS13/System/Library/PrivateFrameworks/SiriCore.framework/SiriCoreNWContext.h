/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol OS_nw_context;
@class NSObject;

@interface SiriCoreNWContext : NSObject {

	NSObject*<OS_nw_context> _context;

}
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)nwContext;
@end

