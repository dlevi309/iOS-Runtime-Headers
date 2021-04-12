/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSSet, NSLocale;

@interface PGTimeTitleOptions : NSObject {

	BOOL _filterDates;
	NSSet* _eventNodes;
	NSSet* _locationNodes;
	unsigned long long _allowedFormats;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSSet * eventNodes;                             //@synthesize eventNodes=_eventNodes - In the implementation block
@property (nonatomic,retain) NSSet * locationNodes;                          //@synthesize locationNodes=_locationNodes - In the implementation block
@property (assign,nonatomic) unsigned long long allowedFormats;              //@synthesize allowedFormats=_allowedFormats - In the implementation block
@property (assign,nonatomic) BOOL filterDates;                               //@synthesize filterDates=_filterDates - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                              //@synthesize locale=_locale - In the implementation block
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSSet *)eventNodes;
-(void)setEventNodes:(NSSet *)arg1 ;
-(NSSet *)locationNodes;
-(void)setLocationNodes:(NSSet *)arg1 ;
-(unsigned long long)allowedFormats;
-(void)setAllowedFormats:(unsigned long long)arg1 ;
-(BOOL)filterDates;
-(void)setFilterDates:(BOOL)arg1 ;
@end

