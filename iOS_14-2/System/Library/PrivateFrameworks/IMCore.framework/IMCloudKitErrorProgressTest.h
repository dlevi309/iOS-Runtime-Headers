/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCloudKitSyncProgressRuntimeTest.h>

@class NSError;

@interface IMCloudKitErrorProgressTest : IMCloudKitSyncProgressRuntimeTest {

	NSError* _error;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithErrorCode:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)willUpdateSyncState:(id)arg1 ;
@end

