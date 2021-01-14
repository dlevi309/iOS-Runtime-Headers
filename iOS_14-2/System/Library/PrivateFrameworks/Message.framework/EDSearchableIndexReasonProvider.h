/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

@class NSSet;


@protocol EDSearchableIndexReasonProvider <NSObject>
@property (nonatomic,copy,readonly) NSSet * dataSourceRefreshReasons; 
@property (nonatomic,copy,readonly) NSSet * purgeReasons; 
@property (nonatomic,copy,readonly) NSSet * exclusionReasons; 
@property (nonatomic,copy,readonly) NSSet * currentReasons; 
@required
-(NSSet *)purgeReasons;
-(NSSet *)currentReasons;
-(NSSet *)dataSourceRefreshReasons;
-(NSSet *)exclusionReasons;

@end

