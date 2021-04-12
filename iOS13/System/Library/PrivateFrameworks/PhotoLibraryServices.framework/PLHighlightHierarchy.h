/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableSet;

@interface PLHighlightHierarchy : NSObject {

	NSMutableSet* _moments;
	NSMutableSet* _dayHighlights;
	NSMutableSet* _dayGroupHighlights;

}

@property (nonatomic,readonly) NSMutableSet * moments;                         //@synthesize moments=_moments - In the implementation block
@property (nonatomic,readonly) NSMutableSet * dayHighlights;                   //@synthesize dayHighlights=_dayHighlights - In the implementation block
@property (nonatomic,readonly) NSMutableSet * dayGroupHighlights;              //@synthesize dayGroupHighlights=_dayGroupHighlights - In the implementation block
-(id)init;
-(NSMutableSet *)moments;
-(NSMutableSet *)dayGroupHighlights;
-(NSMutableSet *)dayHighlights;
-(void)addMoment:(id)arg1 ;
-(void)addDayHighlight:(id)arg1 ;
-(void)addDayGroupHighlight:(id)arg1 ;
-(void)_addMoment:(id)arg1 ;
-(void)_addDayHighlight:(id)arg1 ;
@end

