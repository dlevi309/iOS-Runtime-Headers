/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)moments;
-(void)_addMoment:(id)arg1 ;
-(id)init;
-(void)addMoment:(id)arg1 ;
-(void)addDayHighlight:(id)arg1 ;
-(NSMutableSet *)dayHighlights;
-(void)_addDayHighlight:(id)arg1 ;
-(NSMutableSet *)dayGroupHighlights;
-(void)addDayGroupHighlight:(id)arg1 ;
@end

