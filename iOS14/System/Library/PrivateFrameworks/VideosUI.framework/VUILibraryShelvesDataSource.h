/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUILibraryDataSource.h>

@protocol VUIShelvesDataSourceDelegate;
@class NSSet, NSDictionary;

@interface VUILibraryShelvesDataSource : VUILibraryDataSource {

	NSSet* _shelfTypes;
	NSDictionary* _dataSourcesByShelfType;
	id<VUIShelvesDataSourceDelegate> _shelvesDelegate;

}

@property (nonatomic,retain) NSSet * shelfTypes;                                                   //@synthesize shelfTypes=_shelfTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * dataSourcesByShelfType;                                //@synthesize dataSourcesByShelfType=_dataSourcesByShelfType - In the implementation block
@property (assign,nonatomic,__weak) id<VUIShelvesDataSourceDelegate> shelvesDelegate;              //@synthesize shelvesDelegate=_shelvesDelegate - In the implementation block
-(id)initWithValidShelfTypes:(id)arg1 ;
-(void)setDataSourcesByShelfType:(NSDictionary *)arg1 ;
-(NSSet *)shelfTypes;
-(id<VUIShelvesDataSourceDelegate>)shelvesDelegate;
-(NSDictionary *)dataSourcesByShelfType;
-(void)setShelvesDelegate:(id<VUIShelvesDataSourceDelegate>)arg1 ;
-(void)setShelfTypes:(NSSet *)arg1 ;
@end

