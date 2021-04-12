/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSDate, _TtC8MapsSync27MapsSyncAnonymousCredential;

@interface MapsSync.MapsSyncReviewedPlace : MapsSync.MapsSyncBaseItem {

	 _muid;
	 _hasUserReviewed;
	 _uploadedPhotosCount;
	 _anonymousCredential;
	 _anonymousCredentialUnstored;

}

@property (readonly,nonatomic) unsigned long long muid; 
@property (readonly,nonatomic) NSDate * lastSuggestedReviewDate; 
@property (readonly,nonatomic) BOOL hasUserReviewed; 
@property (readonly,nonatomic) int uploadedPhotosCount; 
@property (readonly,nonatomic) _TtC8MapsSync27MapsSyncAnonymousCredential * anonymousCredential; 
+(void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
+(id)fetchWithMuids:(id)arg1 ;
+(void)fetchWithMuids:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)executeOnFirstSave:(id)arg1 ;
-(NSDate *)lastSuggestedReviewDate;
-(BOOL)hasUserReviewed;
-(_TtC8MapsSync27MapsSyncAnonymousCredential *)anonymousCredential;
-(id)initWithAnonymousCredential:(id)arg1 ;
-(unsigned long long)muid;
-(int)uploadedPhotosCount;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

