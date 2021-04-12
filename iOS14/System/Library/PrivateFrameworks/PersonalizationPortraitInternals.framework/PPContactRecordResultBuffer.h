/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSMutableArray;

@interface PPContactRecordResultBuffer : NSObject {

	BOOL _loadingComplete;
	NSMutableArray* _records;

}

@property (nonatomic,readonly) NSMutableArray * records;              //@synthesize records=_records - In the implementation block
@property (assign,nonatomic) BOOL loadingComplete;                    //@synthesize loadingComplete=_loadingComplete - In the implementation block
-(id)init;
-(NSMutableArray *)records;
-(BOOL)loadingComplete;
-(void)setLoadingComplete:(BOOL)arg1 ;
@end

