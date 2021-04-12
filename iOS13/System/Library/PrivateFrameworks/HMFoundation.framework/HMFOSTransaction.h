/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_os_transaction;
@class NSObject;

@interface HMFOSTransaction : HMFObject {

	NSObject*<OS_os_transaction> _transaction;
	double _creationTime;

}

@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) double creationTime;                                   //@synthesize creationTime=_creationTime - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(double)creationTime;
@end

