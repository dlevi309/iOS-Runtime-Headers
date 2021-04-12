/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSSet;

@interface CRKLocalDeviceIPAddresses : NSObject {

	NSSet* _IPAddresses;

}

@property (nonatomic,copy,readonly) NSSet * IPAddresses;              //@synthesize IPAddresses=_IPAddresses - In the implementation block
+(id)makeIPAddresses;
-(id)init;
-(NSSet *)IPAddresses;
-(BOOL)containsIPAddress:(id)arg1 ;
@end

