/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/

@class NSString;


@protocol TLToneStoreDownloadController <NSObject>
@property (nonatomic,readonly) NSString * storeAccountName; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(NSString *)storeAccountName;
-(void)openAlertToneStore;
-(void)openRingtoneStore;
-(void)redownloadAllTones;

@end

