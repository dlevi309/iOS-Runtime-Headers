/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class _HMContext;

@interface HMSettingsMessageHandler : NSObject {

	_HMContext* _context;

}

@property (retain) _HMContext * context;              //@synthesize context=_context - In the implementation block
-(_HMContext *)context;
-(void)sendUpdateValueMessage:(id)arg1 value:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setContext:(_HMContext *)arg1 ;
@end

