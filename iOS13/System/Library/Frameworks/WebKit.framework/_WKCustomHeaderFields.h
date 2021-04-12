/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSDictionary, NSArray, NSString;

@interface _WKCustomHeaderFields : NSObject <WKObject> {

	ObjectStorage<API::CustomHeaderFields> _fields;

}

@property (nonatomic,copy) NSDictionary * fields; 
@property (nonatomic,copy) NSArray * thirdPartyDomains; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)init;
-(void)dealloc;
-(NSDictionary *)fields;
-(Object*)_apiObject;
-(void)setFields:(NSDictionary *)arg1 ;
-(NSArray *)thirdPartyDomains;
-(void)setThirdPartyDomains:(NSArray *)arg1 ;
@end

