/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTextItemContainer.h>
@class NSArray;


@protocol GEOTextItemContainer
@property (nonatomic,readonly) id<GEOTextItemDisplayConfig> displayConfig; 
@property (nonatomic,readonly) NSArray * textItems; 
@required
-(NSArray *)textItems;
-(id<GEOTextItemDisplayConfig>)displayConfig;

@end


@protocol GEOTextItemDisplayConfig;
@class NSArray;

@interface GEOTextItemContainer : NSObject <GEOTextItemContainer> {

	id<GEOTextItemDisplayConfig> _displayConfig;
	NSArray* _textItems;

}

@property (nonatomic,readonly) id<GEOTextItemDisplayConfig> displayConfig;              //@synthesize displayConfig=_displayConfig - In the implementation block
@property (nonatomic,readonly) NSArray * textItems;                                     //@synthesize textItems=_textItems - In the implementation block
-(id)init;
-(id)initWithTextItemContainer:(id)arg1 ;
-(NSArray *)textItems;
-(id<GEOTextItemDisplayConfig>)displayConfig;
-(id)initWithDisplayConfig:(id)arg1 textItems:(id)arg2 ;
@end

