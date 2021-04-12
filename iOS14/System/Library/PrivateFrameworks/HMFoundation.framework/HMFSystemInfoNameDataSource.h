/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

@class NSString;


@protocol HMFSystemInfoNameDataSource <NSObject>
@property (__weak) id<HMFSystemInfoNameDataSourceDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * name; 
@required
-(id<HMFSystemInfoNameDataSourceDelegate>)delegate;
-(NSString *)name;
-(void)setDelegate:(id)arg1;

@end

