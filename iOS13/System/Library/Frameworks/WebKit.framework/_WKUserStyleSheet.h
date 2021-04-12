/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface _WKUserStyleSheet : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::UserStyleSheet> _userStyleSheet;

}

@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) BOOL forMainFrameOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)baseURL;
-(NSString *)source;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 ;
-(Object*)_apiObject;
-(BOOL)isForMainFrameOnly;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 userContentWorld:(id)arg5 ;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 baseURL:(id)arg5 userContentWorld:(id)arg6 ;
@end

