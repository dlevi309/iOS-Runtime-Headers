/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSSet, NSLocale;

@interface PGTimeTitleOptions : NSObject {

	BOOL _filterDates;
	NSSet* _momentNodes;
	NSSet* _locationNodes;
	unsigned long long _allowedFormats;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSSet * momentNodes;                            //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) NSSet * locationNodes;                          //@synthesize locationNodes=_locationNodes - In the implementation block
@property (assign,nonatomic) unsigned long long allowedFormats;              //@synthesize allowedFormats=_allowedFormats - In the implementation block
@property (assign,nonatomic) BOOL filterDates;                               //@synthesize filterDates=_filterDates - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                              //@synthesize locale=_locale - In the implementation block
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(NSSet *)momentNodes;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(NSSet *)locationNodes;
-(void)setLocationNodes:(NSSet *)arg1 ;
-(unsigned long long)allowedFormats;
-(void)setAllowedFormats:(unsigned long long)arg1 ;
-(BOOL)filterDates;
-(void)setFilterDates:(BOOL)arg1 ;
@end

