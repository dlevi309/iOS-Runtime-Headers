/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

