/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface TSUMutableWarningSet : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _warnings;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)unionSet:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(void)addWarning:(id)arg1 ;
-(id)warningsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)containsWarningPassingTest:(/*^block*/id)arg1 ;
-(id)popAllWarnings;
-(id)popAllWarningsIfContainsWarningPassingTest:(/*^block*/id)arg1 ;
-(id)warningsOfKind:(long long)arg1 ;
-(BOOL)hasWarningsOfKind:(long long)arg1 ;
@end

