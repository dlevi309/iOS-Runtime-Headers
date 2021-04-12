/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)host;
-(long long)port;
-(NSString *)protocol;
-(Object*)_apiObject;
@end

