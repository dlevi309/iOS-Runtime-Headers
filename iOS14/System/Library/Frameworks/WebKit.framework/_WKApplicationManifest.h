/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface _WKApplicationManifest : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<API::ApplicationManifest> _applicationManifest;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * shortName; 
@property (nonatomic,copy,readonly) NSString * applicationDescription; 
@property (nonatomic,copy,readonly) NSURL * scope; 
@property (nonatomic,copy,readonly) NSURL * startURL; 
@property (nonatomic,readonly) long long displayMode; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)applicationManifestFromJSON:(id)arg1 manifestURL:(id)arg2 documentURL:(id)arg3 ;
-(NSURL *)scope;
-(NSURL *)startURL;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)displayMode;
-(NSString *)shortName;
-(NSString *)name;
-(NSString *)applicationDescription;
-(id)initWithCoder:(id)arg1 ;
-(Object*)_apiObject;
-(void)dealloc;
@end

