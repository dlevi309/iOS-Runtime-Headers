/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/

@class NSString;


@protocol BCUImageFilter <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(id)newOperationWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 waitForCPUSynchronization:(BOOL)arg6 completion:(/*^block*/id)arg7;

@end

