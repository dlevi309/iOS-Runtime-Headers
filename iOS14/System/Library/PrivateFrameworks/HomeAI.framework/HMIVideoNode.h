/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSError;

@interface HMIVideoNode : HMFObject {

	long long _status;
	NSError* _error;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
-(NSError *)error;
-(long long)status;
@end

