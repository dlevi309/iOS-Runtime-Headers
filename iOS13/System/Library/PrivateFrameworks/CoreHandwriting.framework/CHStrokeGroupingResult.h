/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet;

@interface CHStrokeGroupingResult : NSObject <NSCopying> {

	NSArray* _strokeGroupsSortedTopBottomLeftRight;
	NSArray* _textStrokeGroupsSortedByWritingOrientation;
	NSArray* _strokeGroupsSortedByWritingOrientation;
	NSSet* _textStrokeGroups;
	NSSet* _strokeGroups;
	NSSet* _createdStrokeGroups;
	NSSet* _deletedStrokeGroups;

}

@property (nonatomic,copy,readonly) NSSet * strokeGroups;                                              //@synthesize strokeGroups=_strokeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * createdStrokeGroups;                                       //@synthesize createdStrokeGroups=_createdStrokeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * deletedStrokeGroups;                                       //@synthesize deletedStrokeGroups=_deletedStrokeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSArray * textStrokeGroupsSortedTopBottomLeftRight; 
@property (nonatomic,copy,readonly) NSArray * textStrokeGroupsSortedByWritingOrientation; 
@property (nonatomic,copy,readonly) NSArray * strokeGroupsSortedByWritingOrientation; 
@property (nonatomic,copy,readonly) NSSet * textStrokeGroups; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)strokeGroups;
-(NSArray *)strokeGroupsSortedByWritingOrientation;
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 ;
-(NSSet *)textStrokeGroups;
-(NSArray *)textStrokeGroupsSortedByWritingOrientation;
-(NSSet *)createdStrokeGroups;
-(NSSet *)deletedStrokeGroups;
-(id)_sortedStrokeGroupsByWritingOrientationTextOnly:(BOOL)arg1 ;
-(NSArray *)textStrokeGroupsSortedTopBottomLeftRight;
@end

