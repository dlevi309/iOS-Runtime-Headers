/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPObject.h>

@protocol OS_dispatch_data;
@class NSString, NSObject;

@interface TSPUnknownObject : TSPObject {

	NSString* _packageLocator;
	NSObject*<OS_dispatch_data> _serializedData;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> serializedData;              //@synthesize serializedData=_serializedData - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(NSObject*<OS_dispatch_data>)serializedData;
-(id)packageLocator;
-(void)willModify;
-(void)willModifyForUpgrade;
@end

