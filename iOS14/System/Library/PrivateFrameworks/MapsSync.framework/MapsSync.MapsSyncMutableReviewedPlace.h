/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncMutableBaseItem.h>

@class NSDate, _TtC8MapsSync27MapsSyncAnonymousCredential;

@interface MapsSync.MapsSyncMutableReviewedPlace : MapsSync.MapsSyncMutableBaseItem {

	 _proxyObject;

}

@property (assign,nonatomic) unsigned long long muid; 
@property (copy,nonatomic) NSDate * lastSuggestedReviewDate; 
@property (assign,nonatomic) BOOL hasUserReviewed; 
@property (retain,nonatomic) _TtC8MapsSync27MapsSyncAnonymousCredential * anonymousCredential; 
-(void)setMuid:(unsigned long long)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(NSDate *)lastSuggestedReviewDate;
-(void)setLastSuggestedReviewDate:(NSDate *)arg1 ;
-(BOOL)hasUserReviewed;
-(void)setHasUserReviewed:(BOOL)arg1 ;
-(_TtC8MapsSync27MapsSyncAnonymousCredential *)anonymousCredential;
-(void)setAnonymousCredential:(_TtC8MapsSync27MapsSyncAnonymousCredential *)arg1 ;
-(unsigned long long)muid;
@end

