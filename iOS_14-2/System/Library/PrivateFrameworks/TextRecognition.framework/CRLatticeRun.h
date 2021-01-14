/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)paths;
-(CGRect)rect;
-(void)appendPath:(id)arg1 ;
-(id)initWithRect:(CGRect)arg1 ;
-(void)setGraph:(id)arg1 ;
-(NSMutableArray *)mutablePaths;
-(void)setMutablePaths:(NSMutableArray *)arg1 ;
-(NSArray *)graphEdges;
@end

