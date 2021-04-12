/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/


@protocol BCUOperation <NSObject>
@property (assign,nonatomic) float priority; 
@required
-(void)cancel;
-(void)start;
-(float)priority;
-(void)setPriority:(float)arg1;

@end

