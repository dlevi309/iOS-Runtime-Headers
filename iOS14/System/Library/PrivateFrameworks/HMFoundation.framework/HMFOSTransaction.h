/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_os_transaction>)transaction;
-(id)initWithName:(id)arg1 ;
-(double)creationTime;
-(void)dealloc;
@end

