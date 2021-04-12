/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/


@class NSArray;

@interface RTTDictionaryManager : NSObject {

	NSArray* _availableDictionaries;

}

@property (nonatomic,retain) NSArray * availableDictionaries;              //@synthesize availableDictionaries=_availableDictionaries - In the implementation block
+(id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)downloadIfNeeded;
-(void)deleteIfNeeded;
-(void)setAvailableDictionaries:(NSArray *)arg1 ;
-(id)_ttyDictionaryAsset;
-(void)_downloadAsset:(id)arg1 ;
-(NSArray *)availableDictionaries;
@end

