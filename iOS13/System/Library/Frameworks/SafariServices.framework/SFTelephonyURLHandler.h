/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSMutableSet;

@interface SFTelephonyURLHandler : NSObject {

	NSMutableSet* _pendingRequests;

}

@property (nonatomic,retain) NSMutableSet * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSMutableSet *)pendingRequests;
-(void)setPendingRequests:(NSMutableSet *)arg1 ;
-(BOOL)openURLForDialRequest:(id)arg1 withScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addObserverForRequest:(id)arg1 ;
-(void)removeObserverForRequest:(id)arg1 ;
@end

