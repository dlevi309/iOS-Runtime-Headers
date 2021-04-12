/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSError;

@interface NSCloudKitMirroringDelegateResetRequest : NSCloudKitMirroringRequest {

	NSError* _causedByError;

}

@property (nonatomic,readonly) NSError * causedByError;              //@synthesize causedByError=_causedByError - In the implementation block
-(NSError *)causedByError;
-(id)initWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

