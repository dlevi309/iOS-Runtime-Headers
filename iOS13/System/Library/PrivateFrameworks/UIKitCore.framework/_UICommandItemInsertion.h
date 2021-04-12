/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICommandChange.h>

@class NSArray, _UICommandIdentifier;

@interface _UICommandItemInsertion : _UICommandChange {

	NSArray* _fallbacks;
	NSArray* _insertsBefore;
	NSArray* _insertsAfter;

}

@property (nonatomic,readonly) _UICommandIdentifier * anchor; 
@property (nonatomic,readonly) NSArray * fallbacks;                        //@synthesize fallbacks=_fallbacks - In the implementation block
@property (nonatomic,readonly) NSArray * insertsBefore;                    //@synthesize insertsBefore=_insertsBefore - In the implementation block
@property (nonatomic,readonly) NSArray * insertsAfter;                     //@synthesize insertsAfter=_insertsAfter - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)fallbacks;
-(NSArray *)insertsBefore;
-(NSArray *)insertsAfter;
-(void)acceptItemInsertionVisit:(/*^block*/id)arg1 itemDeletionVisit:(/*^block*/id)arg2 menuInsertionVisit:(/*^block*/id)arg3 menuDeletionVisit:(/*^block*/id)arg4 ;
-(BOOL)acceptBoolItemInsertionVisit:(/*^block*/id)arg1 itemDeletionVisit:(/*^block*/id)arg2 menuInsertionVisit:(/*^block*/id)arg3 menuDeletionVisit:(/*^block*/id)arg4 ;
-(id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4 ;
@end

