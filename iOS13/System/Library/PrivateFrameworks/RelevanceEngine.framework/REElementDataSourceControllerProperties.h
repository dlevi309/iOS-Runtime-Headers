/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(Class)dataSourceClass;
-(unsigned long long)updateCount;
-(NSArray *)supportedSections;
-(BOOL)allowsLocationUse;
-(BOOL)hasDataAvailable;
-(NSArray *)allProvidedElements;

@end

