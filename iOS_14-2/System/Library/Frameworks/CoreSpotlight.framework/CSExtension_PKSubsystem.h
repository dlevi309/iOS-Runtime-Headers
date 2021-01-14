/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <libobjc.A.dylib/PKModularService.h>

@class NSString;

@interface CSExtension_PKSubsystem : NSObject <PKModularService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)initForPlugInKit;
-(void)endUsing:(id)arg1 ;
-(void)beginUsing:(id)arg1 withBundle:(id)arg2 ;
-(id)principleClassFromDictionary:(id)arg1 ;
@end

