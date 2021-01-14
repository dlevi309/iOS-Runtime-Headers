/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

