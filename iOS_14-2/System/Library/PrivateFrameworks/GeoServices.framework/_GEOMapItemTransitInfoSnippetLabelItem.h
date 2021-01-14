/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * labelString;                                    //@synthesize labelString=_labelString - In the implementation block
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork;              //@synthesize labelArtwork=_labelArtwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)labelString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 labelString:(id)arg2 labelArtwork:(id)arg3 ;
@end

