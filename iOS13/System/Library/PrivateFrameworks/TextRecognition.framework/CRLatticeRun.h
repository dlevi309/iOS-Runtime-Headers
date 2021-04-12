/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSArray, NSMutableArray;

@interface CRLatticeRun : NSObject {

	NSArray* _graphEdges;
	NSMutableArray* _mutablePaths;
	CGRect _rect;

}

@property (nonatomic,retain) NSMutableArray * mutablePaths;              //@synthesize mutablePaths=_mutablePaths - In the implementation block
@property (nonatomic,readonly) NSArray * paths; 
@property (readonly) CGRect rect;                                        //@synthesize rect=_rect - In the implementation block
@property (nonatomic,readonly) NSArray * graphEdges;                     //@synthesize graphEdges=_graphEdges - In the implementation block
-(id)initWithRect:(CGRect)arg1 ;
-(void)setGraph:(id)arg1 ;
-(CGRect)rect;
-(void)appendPath:(id)arg1 ;
-(NSArray *)paths;
-(NSMutableArray *)mutablePaths;
-(void)setMutablePaths:(NSMutableArray *)arg1 ;
-(NSArray *)graphEdges;
@end

