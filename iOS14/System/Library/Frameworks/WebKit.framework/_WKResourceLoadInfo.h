/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _WKFrameHandle, NSURL, NSString, NSDate;

@interface _WKResourceLoadInfo : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<API::ResourceLoadInfo> _info;

}

@property (nonatomic,readonly) unsigned long long resourceLoadID; 
@property (nonatomic,readonly) _WKFrameHandle * frame; 
@property (nonatomic,readonly) _WKFrameHandle * parentFrame; 
@property (nonatomic,readonly) NSURL * originalURL; 
@property (nonatomic,readonly) NSString * originalHTTPMethod; 
@property (nonatomic,readonly) NSDate * eventTimestamp; 
@property (nonatomic,readonly) BOOL loadedFromCache; 
@property (nonatomic,readonly) long long resourceType; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSURL *)originalURL;
-(long long)resourceType;
-(void)encodeWithCoder:(id)arg1 ;
-(_WKFrameHandle *)frame;
-(NSDate *)eventTimestamp;
-(_WKFrameHandle *)parentFrame;
-(id)initWithCoder:(id)arg1 ;
-(Object*)_apiObject;
-(unsigned long long)resourceLoadID;
-(NSString *)originalHTTPMethod;
-(BOOL)loadedFromCache;
-(void)dealloc;
@end

