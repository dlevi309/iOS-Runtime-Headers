/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHQuery.h>

@protocol CHTextInputQueryTargetDataSource;
@class NSArray;

@interface CHTextInputQuery : CHQuery {

	NSArray* _availableItems;
	id<CHTextInputQueryTargetDataSource> _textInputTargetsDataSource;
	double _totalDuration;

}

@property (setter=_setAvailableItems:,nonatomic,copy) NSArray * availableItems;                  //@synthesize availableItems=_availableItems - In the implementation block
@property (assign,nonatomic) double totalDuration;                                               //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign) id<CHTextInputQueryTargetDataSource> textInputTargetsDataSource;              //@synthesize textInputTargetsDataSource=_textInputTargetsDataSource - In the implementation block
+(id)queryItemStableIdentifierForStrokeGroup:(id)arg1 ;
-(double)totalDuration;
-(void)setTotalDuration:(double)arg1 ;
-(NSArray *)availableItems;
-(id)debugName;
-(void)dealloc;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)setTextInputTargetsDataSource:(id<CHTextInputQueryTargetDataSource>)arg1 ;
-(void)q_updateQueryResult;
-(id<CHTextInputQueryTargetDataSource>)textInputTargetsDataSource;
-(id)q_textInputItemsFromSessionResult:(id)arg1 ;
-(void)_setAvailableItems:(id)arg1 ;
@end

