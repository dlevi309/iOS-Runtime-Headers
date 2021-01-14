/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGTitle, NSArray;

@interface PGTitleTuple : NSObject {

	PGTitle* _title;
	PGTitle* _subtitle;
	NSArray* _locationNames;

}

@property (nonatomic,readonly) PGTitle * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PGTitle * subtitle;                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSArray * locationNames;              //@synthesize locationNames=_locationNames - In the implementation block
-(NSArray *)locationNames;
-(PGTitle *)subtitle;
-(id)description;
-(PGTitle *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 locationNames:(id)arg3 ;
-(id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 ;
@end

