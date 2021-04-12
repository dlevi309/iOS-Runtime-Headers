/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTStoreBackend.h>

@class NSString;

@interface AVTStubbedStoreBackend : NSObject <AVTStoreBackend>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTStoreBackendDelegate> backendDelegate; 
@property (nonatomic,readonly) id<AVTAvatarRecordChangeTracker> recordChangeTracker; 
-(id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveAvatar:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveAvatars:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAvatarWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)duplicateAvatarRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)canCreateAvatarWithError:(id*)arg1 ;
-(id<AVTStoreBackendDelegate>)backendDelegate;
-(void)setBackendDelegate:(id<AVTStoreBackendDelegate>)arg1 ;
-(id<AVTAvatarRecordChangeTracker>)recordChangeTracker;
@end

