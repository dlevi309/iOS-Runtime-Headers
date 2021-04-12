/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _DECItem, _DECLaunchInfo, NSArray, _DECPrediction;

@interface _DECFeedback : NSObject <NSSecureCoding> {

	_DECItem* _itemSelected;
	_DECLaunchInfo* _launchInfo;
	NSArray* _itemsShown;
	_DECPrediction* _prediction;

}

@property (nonatomic,retain) _DECItem * itemSelected;                  //@synthesize itemSelected=_itemSelected - In the implementation block
@property (nonatomic,retain) _DECLaunchInfo * launchInfo;              //@synthesize launchInfo=_launchInfo - In the implementation block
@property (nonatomic,retain) NSArray * itemsShown;                     //@synthesize itemsShown=_itemsShown - In the implementation block
@property (nonatomic,retain) _DECPrediction * prediction;              //@synthesize prediction=_prediction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)feedbackWithItemSelected:(id)arg1 launchInfo:(id)arg2 itemsShown:(id)arg3 prediction:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(_DECPrediction *)prediction;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrediction:(_DECPrediction *)arg1 ;
-(void)setItemSelected:(_DECItem *)arg1 ;
-(id)initWithItemSelected:(id)arg1 launchInfo:(id)arg2 itemsShown:(id)arg3 prediction:(id)arg4 ;
-(NSArray *)itemsShown;
-(_DECLaunchInfo *)launchInfo;
-(_DECItem *)itemSelected;
-(BOOL)relevantLaunch;
-(id)predictedItemsShown;
-(unsigned long long)outcomeForCategory:(unsigned long long)arg1 predictions:(id)arg2 ;
-(unsigned long long)outcomeForCategory:(unsigned long long)arg1 ;
-(unsigned long long)outcomeForCategory:(unsigned long long)arg1 predictionItem:(id)arg2 ;
-(void)setLaunchInfo:(_DECLaunchInfo *)arg1 ;
-(void)setItemsShown:(NSArray *)arg1 ;
@end

