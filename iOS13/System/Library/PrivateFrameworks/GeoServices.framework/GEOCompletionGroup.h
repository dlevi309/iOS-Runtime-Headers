/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray, NSString;


@protocol GEOCompletionGroup <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSString * localizedSectionHeader; 
@property (nonatomic,readonly) BOOL shouldInterleaveClientResults; 
@property (nonatomic,readonly) BOOL enforceServerResultsOrder; 
@required
-(NSArray *)items;
-(BOOL)shouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(NSString *)localizedSectionHeader;

@end

