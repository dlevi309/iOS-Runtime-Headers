/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPArchiver.h>
#import <TSPersistence/TSPProxyObjectMappingProvider.h>

@protocol TSPProxyObjectMapping;
@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider> {

	id<TSPProxyObjectMapping> _proxyObjectMapping;

}

@property (nonatomic,readonly) long long targetType; 
@property (assign,nonatomic,__weak) id<TSPProxyObjectMapping> proxyObjectMapping;              //@synthesize proxyObjectMapping=_proxyObjectMapping - In the implementation block
-(long long)targetType;
-(void)setStrongReference:(id)arg1 message:(Reference*)arg2 ;
-(void)setStrongLazyReference:(id)arg1 message:(Reference*)arg2 ;
-(id<TSPProxyObjectMapping>)proxyObjectMapping;
-(void)setProxyObjectMapping:(id<TSPProxyObjectMapping>)arg1 ;
@end

