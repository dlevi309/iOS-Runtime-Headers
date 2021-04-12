/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol SLMicroBlogSheetDelegate
@property (nonatomic,copy) id locationInformationChangedBlock; 
@optional
-(void)ensureUserRecordStore;
-(long long)characterCountForText:(id)arg1 shortenedURLCost:(long long)arg2;
-(BOOL)countMediaAttachmentsTowardCharacterCount;
-(id)cachedProfileImageDataForScreenName:(id)arg1;

@required
-(void)setActiveAccountIdentifier:(id)arg1;
-(void)fetchSessionInfo:(/*^block*/id)arg1;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchCurrentUrlLimits:(/*^block*/id)arg1;
-(void)fetchCurrentImageLimits:(/*^block*/id)arg1;
-(void)setGeotagStatus:(int)arg1;
-(void)fetchGeotagStatus:(/*^block*/id)arg1;
-(void)sendStatus:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beginPotentialLocationUse;
-(void)endPotentialLocationUse;
-(void)showSettingsIfNeeded;
-(id)serviceAccountTypeIdentifier;
-(void)deferExpensiveOperations;
-(void)stopDeferringExpensiveOperations;
-(void)logDidSendStatusWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4;
-(id)locationInformationChangedBlock;
-(void)setLocationInformationChangedBlock:(/*^block*/id)arg1;

@end

