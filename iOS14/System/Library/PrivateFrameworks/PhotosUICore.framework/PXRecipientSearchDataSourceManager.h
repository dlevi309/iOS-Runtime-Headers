/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PXRecipientSearchDataSource;

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager {

	NSString* _queryString;
	unsigned long long _searchState;

}

@property (assign,nonatomic) unsigned long long searchState;                          //@synthesize searchState=_searchState - In the implementation block
@property (nonatomic,readonly) PXRecipientSearchDataSource * dataSource; 
@property (nonatomic,copy) NSString * queryString;                                    //@synthesize queryString=_queryString - In the implementation block
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setSearchState:(unsigned long long)arg1 ;
-(unsigned long long)searchState;
-(void)queryStringDidChange;
@end

