/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSArray, NSMutableArray;

@interface SXBlueprintAnalyzerCursor : NSObject {

	double _highestMaxY;
	NSArray* _path;
	NSMutableArray* _mutablePath;

}

@property (nonatomic,readonly) NSMutableArray * mutablePath;              //@synthesize mutablePath=_mutablePath - In the implementation block
@property (assign,nonatomic) double highestMaxY;                          //@synthesize highestMaxY=_highestMaxY - In the implementation block
@property (nonatomic,retain) NSArray * path;                              //@synthesize path=_path - In the implementation block
-(id)init;
-(NSArray *)path;
-(void)setPath:(NSArray *)arg1 ;
-(void)addPathComponent:(id)arg1 ;
-(void)removePathComponent:(id)arg1 ;
-(double)highestMaxY;
-(void)setHighestMaxY:(double)arg1 ;
-(NSMutableArray *)mutablePath;
@end

