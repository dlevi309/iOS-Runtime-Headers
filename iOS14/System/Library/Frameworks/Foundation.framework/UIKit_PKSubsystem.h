/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/PKModularService.h>

@class NSDictionary, NSString;

@interface UIKit_PKSubsystem : NSObject <PKModularService> {

	BOOL _initialized;
	BOOL _plugInKitProcess;
	NSDictionary* _infoDictionary;

}

@property (nonatomic,copy) NSDictionary * infoDictionary;                                  //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (assign,getter=isPlugInKitProcess,nonatomic) BOOL plugInKitProcess;              //@synthesize plugInKitProcess=_plugInKitProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)initForPlugInKit;
+(id)initForPlugInKitWithOptions:(id)arg1 ;
-(void)endUsing:(id)arg1 ;
-(NSDictionary *)infoDictionary;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(BOOL)isPlugInKitProcess;
-(void)setPlugInKitProcess:(BOOL)arg1 ;
-(void)beginUsing:(id)arg1 withBundle:(id)arg2 ;
-(void)dealloc;
@end

