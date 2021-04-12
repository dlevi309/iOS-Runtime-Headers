/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSIndexSet;


@protocol PLIndexMapperDataSource <NSObject>
@property (nonatomic,copy,readonly) NSIndexSet * filteredIndexes; 
@required
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
-(NSIndexSet *)filteredIndexes;

@end

