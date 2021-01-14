/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/TBFetchProvider.h>

@class NSString;

@interface TBDataSource : NSObject <TBFetchProvider> {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(void)executeFetchRequest:(id)arg1 ;
-(void)submitAnalyticsEventForFetchRequest:(id)arg1 duration:(double)arg2 error:(id)arg3 resultCount:(long long)arg4 ;
@end

