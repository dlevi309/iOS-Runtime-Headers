/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSString, NSUUID;

@interface _PASDeviceIdentifier : NSObject {

	NSString* _path;

}

@property (readonly) NSUUID * UUID; 
-(NSUUID *)UUID;
-(id)init;
-(void)reset;
-(id)initWithBasePath:(id)arg1 ;
@end

