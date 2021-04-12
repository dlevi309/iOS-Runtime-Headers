/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@class NSMutableArray;

@interface CDPDXPCEventObserver : NSObject {

	NSMutableArray* _eventListeners;

}
+(id)sharedObserver;
-(void)start;
-(void)registerListener:(id)arg1 ;
-(void)_setupDarwinListener;
-(void)_setupDistributedListener;
@end

