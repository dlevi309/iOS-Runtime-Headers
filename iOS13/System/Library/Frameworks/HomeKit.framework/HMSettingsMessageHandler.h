/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class _HMContext;

@interface HMSettingsMessageHandler : NSObject {

	_HMContext* _context;

}

@property (retain) _HMContext * context;              //@synthesize context=_context - In the implementation block
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(void)sendUpdateValueMessage:(id)arg1 value:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

