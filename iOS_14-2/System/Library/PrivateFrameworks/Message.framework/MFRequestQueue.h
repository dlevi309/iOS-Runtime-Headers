/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
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
-(unsigned long long)signpostID;
-(id)init;
-(BOOL)sendRequests:(id)arg1 ;
-(BOOL)_processRequests:(id)arg1 ;
-(BOOL)processRequest:(id)arg1 ;
-(BOOL)addRequests:(id)arg1 ;
-(NSMutableArray *)requestPairs;
-(void)setRequestPairs:(NSMutableArray *)arg1 ;
-(BOOL)addRequest:(id)arg1 ;
-(BOOL)addRequests:(id)arg1 combine:(BOOL)arg2 ;
-(BOOL)processRequests:(id)arg1 ;
@end

