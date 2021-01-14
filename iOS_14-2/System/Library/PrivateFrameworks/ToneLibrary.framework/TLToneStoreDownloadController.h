/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

