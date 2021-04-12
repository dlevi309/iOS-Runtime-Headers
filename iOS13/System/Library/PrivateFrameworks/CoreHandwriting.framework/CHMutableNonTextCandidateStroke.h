/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHNonTextCandidateStroke.h>

@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (nonatomic,retain) NSDictionary * supportByStrokeIdentifier; 
-(id)description;
-(BOOL)_removeSupportForStrokeIdentifier:(id)arg1 ;
-(BOOL)_adjustSupportForLineClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 ;
-(BOOL)_adjustSupportForContainerClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 ;
-(void)_setSupportForStrokeIdentifier:(id)arg1 support:(double)arg2 ;
-(void)setSupportByStrokeIdentifier:(NSDictionary *)arg1 ;
-(BOOL)adjustSupportByRemovingStrokeIdentifier:(id)arg1 ;
-(BOOL)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 ;
@end

