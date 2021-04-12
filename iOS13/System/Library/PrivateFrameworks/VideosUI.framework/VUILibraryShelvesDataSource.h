/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

