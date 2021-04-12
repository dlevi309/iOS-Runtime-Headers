/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebProcessPlugInFrame, NSString;

@interface WKWebProcessPlugInRangeHandle : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleRangeHandle> _rangeHandle;

}

@property (readonly) InjectedBundleRangeHandle* _rangeHandle; 
@property (nonatomic,readonly) WKWebProcessPlugInFrame * frame; 
@property (nonatomic,copy,readonly) NSString * text; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rangeHandleWithJSValue:(id)arg1 inContext:(id)arg2 ;
-(InjectedBundleRangeHandle*)_rangeHandle;
-(id)detectDataWithTypes:(unsigned long long)arg1 context:(id)arg2 ;
-(WKWebProcessPlugInFrame *)frame;
-(NSString *)text;
-(Object*)_apiObject;
-(void)dealloc;
@end

