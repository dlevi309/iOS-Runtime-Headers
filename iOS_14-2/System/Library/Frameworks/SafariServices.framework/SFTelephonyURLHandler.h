/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSMutableSet;

@interface SFTelephonyURLHandler : NSObject {

	NSMutableSet* _pendingRequests;

}

@property (nonatomic,retain) NSMutableSet * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)sharedInstance;
-(NSMutableSet *)pendingRequests;
-(id)init;
-(void)setPendingRequests:(NSMutableSet *)arg1 ;
-(void)addObserverForRequest:(id)arg1 ;
-(void)removeObserverForRequest:(id)arg1 ;
-(BOOL)openURLForDialRequest:(id)arg1 withScene:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

