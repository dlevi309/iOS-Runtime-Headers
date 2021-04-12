/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _WKUserContentWorld, WKContentWorld, NSString;

@interface WKUserScript : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::UserScript> _userScript;

}

@property (nonatomic,readonly) _WKUserContentWorld * _userContentWorld; 
@property (nonatomic,readonly) WKContentWorld * _contentWorld; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,readonly) long long injectionTime; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) BOOL forMainFrameOnly; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 inContentWorld:(id)arg4 ;
-(id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 ;
-(_WKUserContentWorld *)_userContentWorld;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 userContentWorld:(id)arg7 ;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 includeMatchPatternStrings:(id)arg4 excludeMatchPatternStrings:(id)arg5 associatedURL:(id)arg6 contentWorld:(id)arg7 deferRunningUntilNotification:(BOOL)arg8 ;
-(WKContentWorld *)_contentWorld;
-(long long)injectionTime;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 userContentWorld:(id)arg6 ;
-(BOOL)isForMainFrameOnly;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 contentWorld:(id)arg6 ;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 contentWorld:(id)arg7 ;
-(Object*)_apiObject;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 contentWorld:(id)arg7 deferRunningUntilNotification:(BOOL)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)source;
@end

