/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTextItemDisplayConfig.h>

@protocol GEOTextItemDisplayConfig
@property (nonatomic,readonly) unsigned maxItemsPerRow; 
@property (nonatomic,readonly) unsigned maxRowCount; 
@required
-(unsigned)maxItemsPerRow;
-(unsigned)maxRowCount;

@end


@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig> {

	unsigned _maxItemsPerRow;
	unsigned _maxRowCount;

}

@property (nonatomic,readonly) unsigned maxItemsPerRow;              //@synthesize maxItemsPerRow=_maxItemsPerRow - In the implementation block
@property (nonatomic,readonly) unsigned maxRowCount;                 //@synthesize maxRowCount=_maxRowCount - In the implementation block
-(id)init;
-(unsigned)maxItemsPerRow;
-(unsigned)maxRowCount;
-(id)initWithMaxItemsPerRow:(unsigned)arg1 maxRowCount:(unsigned)arg2 ;
-(id)initWithTextItemDisplayConfig:(id)arg1 ;
@end

