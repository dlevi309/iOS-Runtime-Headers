/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation {

	ISPropertyListProvider* _dataProvider;
	NSDictionary* _propertyList;

}

@property (retain) ISPropertyListProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
-(void)dealloc;
-(void)run;
-(id)initWithPropertyList:(id)arg1 ;
-(void)setDataProvider:(ISPropertyListProvider *)arg1 ;
-(ISPropertyListProvider *)dataProvider;
@end

