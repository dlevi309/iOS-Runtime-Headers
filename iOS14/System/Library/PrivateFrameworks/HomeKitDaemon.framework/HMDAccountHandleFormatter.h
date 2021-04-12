/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/HMFPrivateDescriptionFormatter.h>

@class NSString;

@interface HMDAccountHandleFormatter : NSFormatter <HMFPrivateDescriptionFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFormatter;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)accountHandleFromString:(id)arg1 ;
-(id)privateStringForObjectValue:(id)arg1 ;
@end

