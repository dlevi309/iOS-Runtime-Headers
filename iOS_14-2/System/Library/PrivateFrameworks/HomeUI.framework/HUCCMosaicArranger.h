/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSArray;

@interface HUCCMosaicArranger : NSObject {

	unsigned long long _chosenLayoutType;
	NSArray* _layouts;
	unsigned long long _numberOfItemsNeeded;

}

@property (nonatomic,retain) NSArray * layouts;                                   //@synthesize layouts=_layouts - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfItemsNeeded;              //@synthesize numberOfItemsNeeded=_numberOfItemsNeeded - In the implementation block
@property (assign,nonatomic) unsigned long long chosenLayoutType;                 //@synthesize chosenLayoutType=_chosenLayoutType - In the implementation block
-(void)setLayouts:(NSArray *)arg1 ;
-(NSArray *)layouts;
-(void)_configureForPortraitGrid;
-(void)_configureForLandscapeGrid;
-(void)setNumberOfItemsNeeded:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItemsNeeded;
-(void)setChosenLayoutType:(unsigned long long)arg1 ;
-(id)initWithCCMosaicType:(unsigned long long)arg1 ;
-(id)calculateOrderingForItems:(id)arg1 ;
-(unsigned long long)chosenLayoutType;
@end

