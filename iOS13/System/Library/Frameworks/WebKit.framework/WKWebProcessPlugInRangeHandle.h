/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)rangeHandleWithJSValue:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(WKWebProcessPlugInFrame *)frame;
-(NSString *)text;
-(Object*)_apiObject;
-(InjectedBundleRangeHandle*)_rangeHandle;
-(id)detectDataWithTypes:(unsigned long long)arg1 context:(id)arg2 ;
@end

