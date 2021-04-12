/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@protocol CRKIPAddressProviding;
@class NSString;

@interface CRKDefaultsBasedInterfaceSwitchingIPAddressProvider : NSObject <CRKIPAddressProviding> {

	id<CRKIPAddressProviding> mBaseProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * IPAddress; 
-(id)init;
-(NSString *)IPAddress;
-(void)makeProvider;
-(BOOL)prefersEthernet;
@end

