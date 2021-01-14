/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNUINavigationListStyle;
@class NSNumber;

@interface CNUINavigationListViewCellHeightEstimator : NSObject {

	id<CNUINavigationListStyle> _navigationListStyle;
	NSNumber* _estimatedCellHeightNumber;
	NSNumber* _estimatedDetailCellHeightNumber;

}

@property (nonatomic,retain) id<CNUINavigationListStyle> navigationListStyle;              //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
@property (nonatomic,retain) NSNumber * estimatedCellHeightNumber;                         //@synthesize estimatedCellHeightNumber=_estimatedCellHeightNumber - In the implementation block
@property (nonatomic,retain) NSNumber * estimatedDetailCellHeightNumber;                   //@synthesize estimatedDetailCellHeightNumber=_estimatedDetailCellHeightNumber - In the implementation block
@property (nonatomic,readonly) double estimatedCellHeight; 
@property (nonatomic,readonly) double estimatedDetailCellHeight; 
-(void)setNavigationListStyle:(id<CNUINavigationListStyle>)arg1 ;
-(id<CNUINavigationListStyle>)navigationListStyle;
-(id)initWithNavigationListStyle:(id)arg1 ;
-(double)estimatedCellHeight;
-(double)estimatedDetailCellHeight;
-(NSNumber *)estimatedCellHeightNumber;
-(void)setEstimatedCellHeightNumber:(NSNumber *)arg1 ;
-(NSNumber *)estimatedDetailCellHeightNumber;
-(void)setEstimatedDetailCellHeightNumber:(NSNumber *)arg1 ;
@end

