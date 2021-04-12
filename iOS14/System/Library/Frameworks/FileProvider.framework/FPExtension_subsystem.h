/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/PKModularService.h>

@class NSDictionary, NSString;

@interface FPExtension_subsystem : NSObject <PKModularService> {

	BOOL _initialized;
	NSDictionary* _infoDictionary;

}

@property (nonatomic,copy) NSDictionary * infoDictionary;              //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)initForPlugInKit;
-(void)endUsing:(id)arg1 ;
-(NSDictionary *)infoDictionary;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(void)beginUsing:(id)arg1 withBundle:(id)arg2 ;
@end

