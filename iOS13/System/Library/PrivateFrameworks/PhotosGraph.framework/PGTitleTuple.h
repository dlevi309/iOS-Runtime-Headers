/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(PGTitle *)title;
-(PGTitle *)subtitle;
-(NSArray *)locationNames;
-(id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 locationNames:(id)arg3 ;
-(id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 ;
@end

