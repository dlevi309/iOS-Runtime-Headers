/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/


@class NSString, NSDictionary;

@interface _ICQDeviceInfo : NSObject {

	NSString* _key;
	NSDictionary* _wordsToReplace;
	NSString* _bundleId;

}

@property (nonatomic,retain) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSDictionary * wordsToReplace;              //@synthesize wordsToReplace=_wordsToReplace - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                        //@synthesize bundleId=_bundleId - In the implementation block
+(id)templateKeyForPhotos:(unsigned long long)arg1 video:(unsigned long long)arg2 ;
+(id)defaultDeviceInfoWithBundleId:(id)arg1 ;
+(void)getInfoWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)getInfoWithBundleId:(id)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setWordsToReplace:(NSDictionary *)arg1 ;
-(NSDictionary *)wordsToReplace;
@end

