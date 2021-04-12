/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <libobjc.A.dylib/BKSProcessDelegate.h>

@class NSString;

@interface WKProcessTaskStateObserverDelegate : NSObject <BKSProcessDelegate> {

	/*^block*/id _taskStateChangedCallback;

}

@property (copy) id taskStateChangedCallback;                       //@synthesize taskStateChangedCallback=_taskStateChangedCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)process:(id)arg1 taskStateDidChange:(long long)arg2 ;
-(id)taskStateChangedCallback;
-(void)setTaskStateChangedCallback:(id)arg1 ;
@end

