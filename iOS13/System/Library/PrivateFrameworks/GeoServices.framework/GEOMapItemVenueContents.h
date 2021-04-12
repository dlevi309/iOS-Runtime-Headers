/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOMapItemVenueContents.h>
@class NSString, NSArray;


@protocol GEOMapItemVenueContents <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(NSString *)title;
-(NSArray *)items;

@end


@class NSString, NSArray;

@interface GEOMapItemVenueContents : NSObject <GEOMapItemVenueContents> {

	NSString* _title;
	NSArray* _items;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
-(id)init;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithTitle:(id)arg1 items:(id)arg2 ;
-(id)initWithItemList:(id)arg1 ;
@end

