/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSMutableArray, SKUIHeaderViewElement, NSArray;

@interface SKUITracklistViewElement : SKUIViewElement {

	NSMutableArray* _sections;
	NSMutableArray* _tracks;

}

@property (nonatomic,readonly) SKUIHeaderViewElement * header; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * tracks; 
-(SKUIHeaderViewElement *)header;
-(NSArray *)sections;
-(NSArray *)tracks;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(void)enumerateTracksUsingBlock:(/*^block*/id)arg1 ;
@end

