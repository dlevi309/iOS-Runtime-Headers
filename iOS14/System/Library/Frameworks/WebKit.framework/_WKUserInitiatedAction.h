/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKUserInitiatedAction : NSObject <WKObject> {

	ObjectStorage<API::UserInitiatedAction> _userInitiatedAction;

}

@property (getter=isConsumed,nonatomic,readonly) BOOL consumed; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)consume;
-(Object*)_apiObject;
-(BOOL)isConsumed;
-(void)dealloc;
@end

