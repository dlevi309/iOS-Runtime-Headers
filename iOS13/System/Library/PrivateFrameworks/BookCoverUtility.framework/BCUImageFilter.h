/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/

@class NSString;


@protocol BCUImageFilter <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(id)newOperationWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 completion:(/*^block*/id)arg6;

@end

