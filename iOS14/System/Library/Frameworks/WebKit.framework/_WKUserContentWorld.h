/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKUserContentWorld : NSObject <WKObject> {

	RetainPtr<WKContentWorld>* _contentWorld;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)normalWorld;
+(id)worldWithName:(id)arg1 ;
-(NSString *)name;
-(Object*)_apiObject;
-(id)_init;
-(id)_initWithName:(id)arg1 ;
-(id)_initWithContentWorld:(id)arg1 ;
@end

