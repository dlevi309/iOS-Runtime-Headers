/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)dictionaryRepresentation;
-(void)setToroID:(NSString *)arg1 ;
-(NSString *)toroID;
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

