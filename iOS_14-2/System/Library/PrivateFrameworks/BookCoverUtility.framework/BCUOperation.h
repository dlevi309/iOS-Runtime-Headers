/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/


@protocol BCUOperation <NSObject>
@property (assign,nonatomic) float priority; 
@required
-(void)start;
-(void)cancel;
-(float)priority;
-(void)setPriority:(float)arg1;

@end

