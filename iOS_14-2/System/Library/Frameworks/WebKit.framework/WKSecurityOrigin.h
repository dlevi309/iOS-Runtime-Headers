/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKSecurityOrigin : NSObject <WKObject> {

	ObjectStorage<API::SecurityOrigin> _securityOrigin;

}

@property (nonatomic,copy,readonly) NSString * protocol; 
@property (nonatomic,copy,readonly) NSString * host; 
@property (nonatomic,readonly) long long port; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)port;
-(NSString *)host;
-(NSString *)protocol;
-(NSString *)description;
-(Object*)_apiObject;
-(void)dealloc;
@end

