/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/


@class UASharedPasteboardManager;

@interface UASharedPasteboard : NSObject {

	UASharedPasteboardManager* _manager;

}

@property (assign) UASharedPasteboardManager * manager;              //@synthesize manager=_manager - In the implementation block
+(void)initialize;
+(void)clearLocalPasteboardInformation;
+(void)startPreventingPasteboardSharing;
+(void)stopPreventingPasteboardSharing;
+(void)localPasteboardDidAddData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3 ;
+(void)localPasteboardDidAddItems:(id)arg1 forGeneration:(unsigned long long)arg2 ;
+(void)localPasteboardDidPasteGeneration:(unsigned long long)arg1 ;
+(id)remotePasteboard;
-(void)setManager:(UASharedPasteboardManager *)arg1 ;
-(UASharedPasteboardManager *)manager;
-(id)currentRemoteDeviceName;
-(void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)returnPasteboardDataBeforeArchives;
-(void)prefetchRemotePasteboardTypes:(id)arg1 ;
@end

