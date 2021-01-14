/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSIndexSet;


@protocol PLIndexMapperDataSource <NSObject>
@property (nonatomic,copy,readonly) NSIndexSet * filteredIndexes; 
@required
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
-(NSIndexSet *)filteredIndexes;

@end

