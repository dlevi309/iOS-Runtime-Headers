/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 userContentWorld:(id)arg5 ;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 ;
-(NSURL *)baseURL;
-(id)initWithSource:(id)arg1 forWKWebView:(id)arg2 forMainFrameOnly:(BOOL)arg3 level:(long long)arg4 userContentWorld:(id)arg5 ;
-(BOOL)isForMainFrameOnly;
-(id)initWithSource:(id)arg1 forWKWebView:(id)arg2 forMainFrameOnly:(BOOL)arg3 baseURL:(id)arg4 level:(long long)arg5 userContentWorld:(id)arg6 ;
-(Object*)_apiObject;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 baseURL:(id)arg5 userContentWorld:(id)arg6 ;
-(id)initWithSource:(id)arg1 forWKWebView:(id)arg2 forMainFrameOnly:(BOOL)arg3 includeMatchPatternStrings:(id)arg4 excludeMatchPatternStrings:(id)arg5 baseURL:(id)arg6 level:(long long)arg7 contentWorld:(id)arg8 ;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 baseURL:(id)arg5 level:(long long)arg6 userContentWorld:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)source;
@end

