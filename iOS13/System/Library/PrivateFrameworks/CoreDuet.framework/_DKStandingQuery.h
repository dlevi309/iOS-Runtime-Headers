/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

@class NSString;


@protocol _DKStandingQuery
@property (nonatomic,retain) NSString * queryIdentifier; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity; 
@required
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(id)arg1;
-(void)setQueryIdentifier:(id)arg1;
-(NSString *)queryIdentifier;
-(id)fetchResult;
-(void)executeWithStorage:(id)arg1;

@end

