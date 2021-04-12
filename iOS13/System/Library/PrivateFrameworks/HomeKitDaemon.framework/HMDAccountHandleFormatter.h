/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)privateStringForObjectValue:(id)arg1 ;
-(id)accountHandleFromString:(id)arg1 ;
@end

