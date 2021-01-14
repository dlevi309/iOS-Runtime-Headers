/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PLPerformChangesRequest <NSObject>
@required
-(void)executeWithService:(id)arg1 reply:(/*^block*/id)arg2;
-(long long)accessScopeOptionsRequiredForRequestedChanges;
-(void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2;
-(id)errorWithLocalizedDescription:(id)arg1;
-(void)discardUnsupportedLimitedLibraryChangeRequests;

@end

