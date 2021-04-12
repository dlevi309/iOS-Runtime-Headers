/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <Tips/TPSDataCacheController.h>

@interface TPSJSONCacheController : TPSDataCacheController
+(id)sharedInstance;
-(void)commonInit;
-(id)formattedDataWithFileURL:(id)arg1 ;
-(id)formattedDataWithData:(id)arg1 ;
-(BOOL)isURLValid:(id)arg1 ;
-(id)newDataCache;
-(void)formattedDataWithFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

