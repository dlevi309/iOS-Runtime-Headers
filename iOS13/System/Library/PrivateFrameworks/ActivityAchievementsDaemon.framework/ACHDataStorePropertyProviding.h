/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

@class NSString, NSArray, NSDictionary;


@protocol ACHDataStorePropertyProviding <NSObject>
@property (nonatomic,readonly) NSString * uniqueName; 
@property (nonatomic,readonly) NSArray * dataStorePropertyKeys; 
@property (nonatomic,retain) NSDictionary * dataStoreProperties; 
@required
-(NSString *)uniqueName;
-(void)dataStoreDidClearAllProperties:(id)arg1 completion:(/*^block*/id)arg2;
-(NSArray *)dataStorePropertyKeys;
-(NSDictionary *)dataStoreProperties;
-(void)setDataStoreProperties:(id)arg1;

@end

