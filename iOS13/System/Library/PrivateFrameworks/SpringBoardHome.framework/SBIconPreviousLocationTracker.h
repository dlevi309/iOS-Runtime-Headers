/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class NSMapTable, SBHIconModel;

@interface SBIconPreviousLocationTracker : NSObject {

	NSMapTable* _previousIconLocations;
	SBHIconModel* _iconModel;

}

@property (nonatomic,retain) SBHIconModel * iconModel;              //@synthesize iconModel=_iconModel - In the implementation block
-(SBHIconModel *)iconModel;
-(void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2 ;
-(id)previousLocationInfoForIcon:(id)arg1 ;
-(void)setIconModel:(SBHIconModel *)arg1 ;
@end

