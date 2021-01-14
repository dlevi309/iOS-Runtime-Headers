/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOMapItemVenueContents.h>
@class NSString, NSArray;


@protocol GEOMapItemVenueContents <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(NSArray *)items;
-(NSString *)title;

@end


@class NSString, NSArray;

@interface GEOMapItemVenueContents : NSObject <GEOMapItemVenueContents> {

	NSString* _title;
	NSArray* _items;

}

@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)items;
-(id)initWithTitle:(id)arg1 items:(id)arg2 ;
-(id)initWithItemList:(id)arg1 ;
-(NSString *)title;
@end

