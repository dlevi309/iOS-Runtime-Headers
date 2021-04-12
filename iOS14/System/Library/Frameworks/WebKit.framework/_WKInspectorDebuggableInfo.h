/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _WKInspectorDebuggableInfo : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::DebuggableInfo> _debuggableInfo;

}

@property (assign,nonatomic) long long debuggableType; 
@property (nonatomic,copy) NSString * targetPlatformName; 
@property (nonatomic,copy) NSString * targetBuildVersion; 
@property (nonatomic,copy) NSString * targetProductVersion; 
@property (assign,nonatomic) BOOL targetIsSimulator; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)debuggableType;
-(void)setDebuggableType:(long long)arg1 ;
-(NSString *)targetPlatformName;
-(void)setTargetPlatformName:(NSString *)arg1 ;
-(NSString *)targetBuildVersion;
-(void)setTargetBuildVersion:(NSString *)arg1 ;
-(BOOL)targetIsSimulator;
-(Object*)_apiObject;
-(NSString *)targetProductVersion;
-(void)setTargetProductVersion:(NSString *)arg1 ;
-(void)setTargetIsSimulator:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

