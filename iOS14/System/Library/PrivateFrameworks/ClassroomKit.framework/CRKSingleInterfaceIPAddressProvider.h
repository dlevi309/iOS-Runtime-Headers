/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@class NSString;

@interface CRKSingleInterfaceIPAddressProvider : NSObject <CRKIPAddressProviding> {

	NSString* mInterfaceName;

}

@property (nonatomic,copy,readonly) NSString * IPAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInterfaceName:(id)arg1 ;
-(id)init;
-(NSString *)IPAddress;
@end

