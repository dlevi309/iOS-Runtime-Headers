/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {

	NSMutableArray* _eventListeners;

}
+(id)sharedObserver;
-(void)registerListener:(id)arg1 ;
-(void)start;
-(void)_setupDistributedListener;
-(void)_setupDarwinListener;
@end

