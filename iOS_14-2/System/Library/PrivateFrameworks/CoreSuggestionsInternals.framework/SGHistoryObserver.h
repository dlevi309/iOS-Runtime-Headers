/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGSuggestHistoryObserver.h>

@class SGSqlEntityStore, NSString;

@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver> {

	SGSqlEntityStore* _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStore:(id)arg1 ;
-(void)processNewConfirmedOrRejectedReminderHashes:(id)arg1 ;
-(void)hashesDidChange;
-(void)processNewConfirmOrRejectEventHashes:(id)arg1 ;
@end

