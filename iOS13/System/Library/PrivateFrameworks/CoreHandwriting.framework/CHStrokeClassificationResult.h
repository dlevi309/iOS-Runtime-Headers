/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary;

@interface CHStrokeClassificationResult : NSObject <NSCopying> {

	NSSet* _textStrokeIdentifiers;
	NSDictionary* _strokeClassificationsByStrokeIdentifier;
	NSDictionary* _substrokesByStrokeIdentifier;
	NSSet* _nontextCandidates;

}

@property (nonatomic,copy,readonly) NSDictionary * strokeClassificationsByStrokeIdentifier;              //@synthesize strokeClassificationsByStrokeIdentifier=_strokeClassificationsByStrokeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * substrokesByStrokeIdentifier;                         //@synthesize substrokesByStrokeIdentifier=_substrokesByStrokeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * textStrokeIdentifiers; 
@property (nonatomic,copy,readonly) NSSet * nontextCandidates;                                           //@synthesize nontextCandidates=_nontextCandidates - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)strokeClassificationsByStrokeIdentifier;
-(NSDictionary *)substrokesByStrokeIdentifier;
-(NSSet *)textStrokeIdentifiers;
-(id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3 ;
-(BOOL)isEquivalentToStrokeClassificationResult:(id)arg1 ;
-(NSSet *)nontextCandidates;
@end

