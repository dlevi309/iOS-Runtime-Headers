/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSMutableArray, NSArray;

@interface CRLatticeResults : NSObject {

	NSMutableArray* _mutableResults;

}

@property (nonatomic,retain) NSMutableArray * mutableResults;              //@synthesize mutableResults=_mutableResults - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
-(id)init;
-(NSArray *)results;
-(NSMutableArray *)mutableResults;
-(void)setMutableResults:(NSMutableArray *)arg1 ;
-(void)addResult:(id)arg1 ;
@end

