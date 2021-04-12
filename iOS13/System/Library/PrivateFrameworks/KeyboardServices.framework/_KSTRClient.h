/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <libobjc.A.dylib/_KSTextReplacementServiceProtocol.h>

@class _KSTextReplacementServer, NSString;

@interface _KSTRClient : NSObject <_KSTextReplacementServiceProtocol> {

	_KSTextReplacementServer* _owner;
	BOOL _hasReadAccess;
	long long _generation;

}

@property (assign,nonatomic) long long generation;                  //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) BOOL hasReadAccess;                  //@synthesize hasReadAccess=_hasReadAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)initWithOwner:(id)arg1 ;
-(long long)generation;
-(void)removeAllEntries;
-(void)setGeneration:(long long)arg1 ;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)requestSyncWithReply:(/*^block*/id)arg1 ;
-(void)cancelPendingUpdatesWithReply:(/*^block*/id)arg1 ;
-(void)queryTextReplacementEntriesWithReply:(/*^block*/id)arg1 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)hasReadAccess;
-(id)initWithOwner:(id)arg1 forConnection:(id)arg2 ;
@end

