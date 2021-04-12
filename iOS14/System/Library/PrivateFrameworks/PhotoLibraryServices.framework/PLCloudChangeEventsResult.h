/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

