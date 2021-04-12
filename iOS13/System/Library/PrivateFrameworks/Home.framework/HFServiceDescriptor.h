/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString;

@interface HFServiceDescriptor : NSObject <NAIdentifiable> {

	HFServiceDescriptor* _parentServiceDescriptor;
	NSString* _serviceType;
	NSString* _serviceSubtype;
	/*^block*/id _parentServiceDescriptorGenerator;

}

@property (nonatomic,copy,readonly) id parentServiceDescriptorGenerator;                   //@synthesize parentServiceDescriptorGenerator=_parentServiceDescriptorGenerator - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                                //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceSubtype;                             //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (nonatomic,readonly) HFServiceDescriptor * parentServiceDescriptor;              //@synthesize parentServiceDescriptor=_parentServiceDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)serviceType;
-(NSString *)serviceSubtype;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptor:(id)arg3 ;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptorGenerator:(/*^block*/id)arg3 ;
-(id)parentServiceDescriptorGenerator;
-(HFServiceDescriptor *)parentServiceDescriptor;
@end

