/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class NSMutableSet;

@interface IMDGroupPhotoRefreshController : NSObject {

	NSMutableSet* _refreshRequests;

}

@property (nonatomic,retain) NSMutableSet * refreshRequests;              //@synthesize refreshRequests=_refreshRequests - In the implementation block
@property (nonatomic,readonly) double minRefreshTime; 
@property (nonatomic,readonly) double maxRefreshTime; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSMutableSet *)refreshRequests;
-(double)minRefreshTime;
-(double)maxRefreshTime;
-(BOOL)shouldRefreshTTLForGroupPhoto:(id)arg1 chatGUID:(id)arg2 ;
-(void)refreshTTLForGroupPhoto:(id)arg1 chat:(id)arg2 ;
-(void)setRefreshRequests:(NSMutableSet *)arg1 ;
@end

