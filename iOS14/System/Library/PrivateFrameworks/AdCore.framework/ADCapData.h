/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/ADSingleton.h>

@class NSString, NSMutableArray;

@interface ADCapData : ADSingleton {

	NSString* _toroID;
	NSMutableArray* _frequencyCapData;
	NSMutableArray* _clickCountData;
	NSMutableArray* _downloadData;

}

@property (nonatomic,retain) NSString * toroID;                              //@synthesize toroID=_toroID - In the implementation block
@property (nonatomic,retain) NSMutableArray * frequencyCapData;              //@synthesize frequencyCapData=_frequencyCapData - In the implementation block
@property (nonatomic,retain) NSMutableArray * clickCountData;                //@synthesize clickCountData=_clickCountData - In the implementation block
@property (nonatomic,retain) NSMutableArray * downloadData;                  //@synthesize downloadData=_downloadData - In the implementation block
+(id)sharedInstance;
-(id)dictionaryRepresentation;
-(id)init;
-(NSString *)toroID;
-(void)setToroID:(NSString *)arg1 ;
-(void)restoreAllCapData;
-(void)resetCapDataObject;
-(id)restoreCapDataArrayFromPlist:(id)arg1 ;
-(void)checkAndUpdateToroID;
-(void)saveCapDataWithReason:(id)arg1 ;
-(void)addCapDataObject:(id)arg1 ofKind:(long long)arg2 ;
-(void)updateCapDataWith:(id)arg1 ofKind:(long long)arg2 ;
-(id)filteredCapData:(id)arg1 maxItems:(unsigned long long)arg2 expirationThresholdInSeconds:(double)arg3 ;
-(id)capDataJSON:(id)arg1 ;
-(id)clickCapObjectForAdamID:(id)arg1 ;
-(id)downloadObjectForAdamID:(id)arg1 ;
-(void)eraseCapData;
-(NSMutableArray *)frequencyCapData;
-(void)setFrequencyCapData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)clickCountData;
-(void)setClickCountData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)downloadData;
-(void)setDownloadData:(NSMutableArray *)arg1 ;
@end

