/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(BOOL)supportsSecureCoding;
+(id)applicationManifestFromJSON:(id)arg1 manifestURL:(id)arg2 documentURL:(id)arg3 ;
-(void)dealloc;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)scope;
-(long long)displayMode;
-(NSString *)shortName;
-(Object*)_apiObject;
-(NSString *)applicationDescription;
-(NSURL *)startURL;
@end

