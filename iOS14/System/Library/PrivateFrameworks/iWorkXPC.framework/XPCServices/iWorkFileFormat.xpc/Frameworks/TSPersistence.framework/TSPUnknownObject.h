/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPObject.h>

@protocol OS_dispatch_data;
@class NSString, NSObject;

@interface TSPUnknownObject : TSPObject {

	NSString* _packageLocator;
	NSObject*<OS_dispatch_data> _serializedData;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> serializedData;              //@synthesize serializedData=_serializedData - In the implementation block
-(NSObject*<OS_dispatch_data>)serializedData;
-(id)initWithContext:(id)arg1 ;
-(id)packageLocator;
-(void)willModify;
-(void)willModifyForUpgrade;
@end

