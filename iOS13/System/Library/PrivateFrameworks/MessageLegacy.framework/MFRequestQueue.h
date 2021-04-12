/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSMutableArray, NSString;

@interface MFRequestQueue : NSObject <EFLoggable> {

	os_unfair_lock_s _lock;
	NSMutableArray* _requestPairs;

}

@property (nonatomic,retain) NSMutableArray * requestPairs;              //@synthesize requestPairs=_requestPairs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)signpostLog;
-(id)init;
-(BOOL)addRequest:(id)arg1 ;
-(unsigned long long)signpostID;
-(BOOL)addRequests:(id)arg1 ;
-(BOOL)processRequests:(id)arg1 ;
-(BOOL)_processRequests:(id)arg1 ;
-(BOOL)processRequest:(id)arg1 ;
-(NSMutableArray *)requestPairs;
-(void)setRequestPairs:(NSMutableArray *)arg1 ;
@end

