/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTextItemDisplayConfig.h>

@protocol GEOTextItemDisplayConfig
@property (nonatomic,readonly) unsigned maxItemsPerRow; 
@property (nonatomic,readonly) unsigned maxRowCount; 
@required
-(unsigned)maxRowCount;
-(unsigned)maxItemsPerRow;

@end


@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig> {

	unsigned _maxItemsPerRow;
	unsigned _maxRowCount;

}

@property (nonatomic,readonly) unsigned maxItemsPerRow;              //@synthesize maxItemsPerRow=_maxItemsPerRow - In the implementation block
@property (nonatomic,readonly) unsigned maxRowCount;                 //@synthesize maxRowCount=_maxRowCount - In the implementation block
-(id)init;
-(unsigned)maxRowCount;
-(unsigned)maxItemsPerRow;
-(id)initWithMaxItemsPerRow:(unsigned)arg1 maxRowCount:(unsigned)arg2 ;
-(id)initWithTextItemDisplayConfig:(id)arg1 ;
@end

