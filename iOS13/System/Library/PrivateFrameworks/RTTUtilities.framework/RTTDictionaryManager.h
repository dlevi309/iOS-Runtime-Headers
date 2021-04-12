/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/


@class NSCondition, NSArray;

@interface RTTDictionaryManager : NSObject {

	NSCondition* _condition;
	NSArray* _availableDictionaries;

}

@property (nonatomic,retain) NSArray * availableDictionaries;              //@synthesize availableDictionaries=_availableDictionaries - In the implementation block
+(id)availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)downloadIfNeeded;
-(void)deleteIfNeeded;
-(void)setAvailableDictionaries:(NSArray *)arg1 ;
-(id)_ttyDictionaryAsset;
-(BOOL)downloadAsset:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_isStalledAutoDownloadAsset:(id)arg1 ;
-(NSArray *)availableDictionaries;
@end

