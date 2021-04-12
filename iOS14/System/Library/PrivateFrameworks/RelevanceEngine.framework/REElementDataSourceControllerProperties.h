/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSString, NSArray;


@protocol REElementDataSourceControllerProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) Class dataSourceClass; 
@property (nonatomic,readonly) NSArray * supportedSections; 
@property (nonatomic,readonly) NSArray * allProvidedElements; 
@property (nonatomic,readonly) BOOL allowsLocationUse; 
@property (nonatomic,readonly) BOOL hasDataAvailable; 
@property (nonatomic,readonly) unsigned long long updateCount; 
@required
-(Class)dataSourceClass;
-(NSString *)name;
-(unsigned long long)updateCount;
-(NSArray *)supportedSections;
-(BOOL)allowsLocationUse;
-(BOOL)hasDataAvailable;
-(NSArray *)allProvidedElements;

@end

