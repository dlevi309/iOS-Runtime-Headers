/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitLabelItem.h>

@protocol GEOTransitArtworkDataSource;
@class NSString;

@interface _GEOMapItemTransitInfoSnippetLabelItem : NSObject <GEOTransitLabelItem> {

	unsigned long long _type;
	NSString* _labelString;
	id<GEOTransitArtworkDataSource> _labelArtwork;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * labelString;                                    //@synthesize labelString=_labelString - In the implementation block
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork;              //@synthesize labelArtwork=_labelArtwork - In the implementation block
-(unsigned long long)type;
-(NSString *)labelString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(id)initWithType:(unsigned long long)arg1 labelString:(id)arg2 labelArtwork:(id)arg3 ;
@end

