/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSString, NSUUID;

@interface _PASDeviceIdentifier : NSObject {

	NSString* _path;

}

@property (readonly) NSUUID * UUID; 
-(id)init;
-(NSUUID *)UUID;
-(void)reset;
-(id)initWithBasePath:(id)arg1 ;
@end

