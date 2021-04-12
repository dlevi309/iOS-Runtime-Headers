/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSArray, NSString;

@interface _WKContentRuleListAction : NSObject <WKObject> {

	ObjectStorage<API::ContentRuleListAction> _action;

}

@property (nonatomic,readonly) BOOL blockedLoad; 
@property (nonatomic,readonly) BOOL blockedCookies; 
@property (nonatomic,readonly) BOOL madeHTTPS; 
@property (nonatomic,copy,readonly) NSArray * notifications; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSArray *)notifications;
-(Object*)_apiObject;
-(BOOL)blockedLoad;
-(BOOL)blockedCookies;
-(BOOL)madeHTTPS;
@end

