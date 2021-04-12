/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSMutableArray, NSArray;

@interface CRLatticeResults : NSObject {

	NSMutableArray* _mutableResults;

}

@property (nonatomic,retain) NSMutableArray * mutableResults;              //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
-(NSArray *)results;
-(id)init;
-(void)addResult:(id)arg1 ;
-(NSMutableArray *)mutableResults;
-(void)setMutableResults:(NSMutableArray *)arg1 ;
@end

