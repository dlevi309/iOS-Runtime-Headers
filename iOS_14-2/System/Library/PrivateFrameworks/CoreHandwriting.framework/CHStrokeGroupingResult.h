/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSSet;

@interface CHStrokeGroupingResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _strokeGroupsSortedTopBottomLeftRight;
	NSArray* _textStrokeGroupsSortedByWritingOrientation;
	NSArray* _strokeGroupsSortedByWritingOrientation;
	NSArray* _textStrokeGroupClusters;
	NSArray* _strokeGroupClusters;
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
@property (nonatomic,copy,readonly) NSArray * strokeGroupClusters; 
@property (nonatomic,copy,readonly) NSArray * textStrokeGroupClusters; 
@property (nonatomic,copy,readonly) NSSet * textStrokeGroups; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSSet *)strokeGroups;
-(NSArray *)strokeGroupsSortedByWritingOrientation;
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 ;
-(NSArray *)textStrokeGroupsSortedTopBottomLeftRight;
-(NSSet *)textStrokeGroups;
-(NSArray *)textStrokeGroupsSortedByWritingOrientation;
-(NSArray *)textStrokeGroupClusters;
-(NSSet *)createdStrokeGroups;
-(NSSet *)deletedStrokeGroups;
-(id)_sortedStrokeGroupsByWritingOrientationTextOnly:(BOOL)arg1 ;
-(BOOL)isEqualToStrokeGroupingResult:(id)arg1 ;
-(NSArray *)strokeGroupClusters;
@end

