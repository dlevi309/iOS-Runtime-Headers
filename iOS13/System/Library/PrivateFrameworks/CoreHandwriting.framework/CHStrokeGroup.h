/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@protocol CHStrokeIdentifier;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSSet, NSString;

@interface CHStrokeGroup : NSObject {

	long long _uniqueIdentifier;
	long long _ancestorIdentifier;
	NSSet* _strokeIdentifiers;
	id<CHStrokeIdentifier> _firstStrokeIdentifier;
	id<CHStrokeIdentifier> _lastStrokeIdentifier;
	long long _classification;
	double _groupingConfidence;
	NSString* _strategyIdentifier;
	CGPoint _firstStrokeOrigin;
	CGRect _bounds;

}

@property (nonatomic,readonly) long long uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long ancestorIdentifier;                              //@synthesize ancestorIdentifier=_ancestorIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                             //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGPoint firstStrokeOrigin;                                 //@synthesize firstStrokeOrigin=_firstStrokeOrigin - In the implementation block
@property (nonatomic,readonly) CGVector averageWritingOrientation; 
@property (nonatomic,readonly) NSSet * strokeIdentifiers;                                 //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,readonly) id<CHStrokeIdentifier> firstStrokeIdentifier;              //@synthesize firstStrokeIdentifier=_firstStrokeIdentifier - In the implementation block
@property (nonatomic,readonly) id<CHStrokeIdentifier> lastStrokeIdentifier;               //@synthesize lastStrokeIdentifier=_lastStrokeIdentifier - In the implementation block
@property (nonatomic,readonly) long long classification;                                  //@synthesize classification=_classification - In the implementation block
@property (nonatomic,readonly) double groupingConfidence;                                 //@synthesize groupingConfidence=_groupingConfidence - In the implementation block
@property (nonatomic,readonly) NSString * strategyIdentifier;                             //@synthesize strategyIdentifier=_strategyIdentifier - In the implementation block
+(long long)_newStrokeGroupUniqueIdentifier;
+(BOOL)isStrokeGroupSet:(id)arg1 equivalentToStrokeGroupSet:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)uniqueIdentifier;
-(CGRect)bounds;
-(long long)classification;
-(NSSet *)strokeIdentifiers;
-(long long)ancestorIdentifier;
-(id<CHStrokeIdentifier>)firstStrokeIdentifier;
-(id<CHStrokeIdentifier>)lastStrokeIdentifier;
-(CGPoint)firstStrokeOrigin;
-(double)groupingConfidence;
-(id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 firstStrokeOrigin:(CGPoint)arg8 ;
-(NSString *)strategyIdentifier;
-(id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(CGRect)arg4 classification:(long long)arg5 groupingConfidence:(double)arg6 strategyIdentifier:(id)arg7 firstStrokeOrigin:(CGPoint)arg8 ;
-(CGVector)averageWritingOrientation;
-(id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 strategyIdentifier:(id)arg8 firstStrokeOrigin:(CGPoint)arg9 ;
-(BOOL)isEquivalentToStrokeGroup:(id)arg1 ;
@end

