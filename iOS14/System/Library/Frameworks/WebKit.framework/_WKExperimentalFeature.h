/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKExperimentalFeature : NSObject <WKObject> {

	ObjectStorage<API::ExperimentalFeature> _experimentalFeature;

}

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * details; 
@property (nonatomic,readonly) BOOL defaultValue; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isHidden;
-(BOOL)defaultValue;
-(NSString *)name;
-(NSString *)description;
-(NSString *)key;
-(Object*)_apiObject;
-(NSString *)details;
-(void)dealloc;
@end

