/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXProxyConfiguration.h>
@class NSString;


@protocol SXProxyConfiguration <NSObject>
@property (readonly,nonatomic) NSString * proxyAutoConfigScript; 
@required
-(NSString *)proxyAutoConfigScript;

@end


@class NSString;

@interface SXProxyConfiguration : NSObject <SXProxyConfiguration> {

	NSString* _proxyAutoConfigScript;

}

@property (nonatomic,copy,readonly) NSString * proxyAutoConfigScript;              //@synthesize proxyAutoConfigScript=_proxyAutoConfigScript - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)direct;
-(id)initWithHost:(id)arg1 ;
-(NSString *)proxyAutoConfigScript;
-(id)initWithProxyAutoConfigScript:(id)arg1 ;
@end

