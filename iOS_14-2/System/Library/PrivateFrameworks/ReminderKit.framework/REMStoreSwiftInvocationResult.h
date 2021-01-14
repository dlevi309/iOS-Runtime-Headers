/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, REMFetchResultToken;

@interface REMStoreSwiftInvocationResult : NSObject <NSSecureCoding> {

	NSData* _resultData;
	NSDictionary* _resultStorages;
	REMFetchResultToken* _latestFetchResultToken;

}

@property (nonatomic,readonly) NSData * resultData;                                       //@synthesize resultData=_resultData - In the implementation block
@property (nonatomic,readonly) NSDictionary * resultStorages;                             //@synthesize resultStorages=_resultStorages - In the implementation block
@property (nonatomic,readonly) REMFetchResultToken * latestFetchResultToken;              //@synthesize latestFetchResultToken=_latestFetchResultToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)resultStorages;
-(REMFetchResultToken *)latestFetchResultToken;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)resultData;
-(id)initWithResultData:(id)arg1 storages:(id)arg2 latestFetchResultToken:(id)arg3 ;
@end

