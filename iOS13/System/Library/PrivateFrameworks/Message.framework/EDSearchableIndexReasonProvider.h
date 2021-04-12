/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

@class NSSet;


@protocol EDSearchableIndexReasonProvider <NSObject>
@property (nonatomic,copy,readonly) NSSet * dataSourceRefreshReasons; 
@property (nonatomic,copy,readonly) NSSet * purgeReasons; 
@property (nonatomic,copy,readonly) NSSet * exclusionReasons; 
@property (nonatomic,copy,readonly) NSSet * currentReasons; 
@required
-(NSSet *)dataSourceRefreshReasons;
-(NSSet *)purgeReasons;
-(NSSet *)exclusionReasons;
-(NSSet *)currentReasons;

@end

