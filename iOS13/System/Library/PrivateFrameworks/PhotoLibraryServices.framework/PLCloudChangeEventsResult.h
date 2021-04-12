/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString;


@protocol PLCloudChangeEventsResult <NSObject>
@property (readonly) long long resultType; 
@property (copy,readonly) NSString * currentTokenDescription; 
@required
-(long long)resultType;
-(void)enumerateLocalEventsWithBlock:(/*^block*/id)arg1;
-(NSString *)currentTokenDescription;

@end

