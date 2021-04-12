/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

@class NSString;


@protocol HMFSystemInfoNameDataSource <NSObject>
@property (__weak) id<HMFSystemInfoNameDataSourceDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * name; 
@required
-(NSString *)name;
-(id<HMFSystemInfoNameDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

