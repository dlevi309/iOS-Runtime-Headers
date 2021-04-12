/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVLockupFactory : NSObject
+(TVCellMetrics)cellMetricsForCollectionElement:(id)arg1 ;
+(void)updateViewLayoutForCell:(id)arg1 forSize:(CGSize)arg2 ;
+(void)_configureCell:(id)arg1 layout:(id)arg2 element:(id)arg3 ;
+(void)_configureStackingPoster:(id)arg1 layout:(id)arg2 element:(id)arg3 forMetrics:(BOOL)arg4 ;
+(id)_configurationIdentifierForElement:(id)arg1 ;
+(UIEdgeInsets)_customCellPaddingForCellMetrics:(TVCellMetrics)arg1 withCollectionCellMetrics:(TVCellMetrics)arg2 contentAlignment:(long long)arg3 ;
-(id)init;
-(void)_registerLockup;
@end

