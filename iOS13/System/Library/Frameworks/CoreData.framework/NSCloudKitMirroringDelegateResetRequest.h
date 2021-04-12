/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSError;

@interface NSCloudKitMirroringDelegateResetRequest : NSCloudKitMirroringRequest {

	NSError* _causedByError;

}

@property (nonatomic,readonly) NSError * causedByError;              //@synthesize causedByError=_causedByError - In the implementation block
-(void)dealloc;
-(id)initWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSError *)causedByError;
@end

