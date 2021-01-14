/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface NSSQLiteIndexTrackingModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(unsigned long long)ancillaryEntityCount;
+(void)updateIndexStatistics:(id)arg1 usingConnection:(id)arg2 model:(id)arg3 ;
+(void)_invalidateStaticCaches;
+(id)newModelForFrameworkVersion:(id)arg1 ;
+(id)ancillaryModelNamespace;
+(unsigned long long)ancillaryEntityOffset;
@end

