/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REClassLoaderConfiguration.h>

@class NSString;

@interface REDataSourceLoaderConfiguration : NSObject <REClassLoaderConfiguration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(Class)desiredClassForLoader;
-(Class)desiredClassFromBundle:(id)arg1 forKey:(id)arg2 ;
-(BOOL)shouldLoadBundleClass:(Class)arg1 forKey:(id)arg2 ;
@end

