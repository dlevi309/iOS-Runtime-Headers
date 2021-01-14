/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

