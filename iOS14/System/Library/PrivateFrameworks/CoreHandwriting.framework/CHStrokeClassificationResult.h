/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDictionary;

@interface CHStrokeClassificationResult : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _textStrokeIdentifiers;
	NSDictionary* _strokeClassificationsByStrokeIdentifier;
	NSDictionary* _substrokesByStrokeIdentifier;
	NSSet* _nontextCandidates;

}

@property (nonatomic,copy,readonly) NSDictionary * strokeClassificationsByStrokeIdentifier;              //@synthesize strokeClassificationsByStrokeIdentifier=_strokeClassificationsByStrokeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * substrokesByStrokeIdentifier;                         //@synthesize substrokesByStrokeIdentifier=_substrokesByStrokeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * textStrokeIdentifiers; 
@property (nonatomic,copy,readonly) NSSet * nontextCandidates;                                           //@synthesize nontextCandidates=_nontextCandidates - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)strokeClassificationsByStrokeIdentifier;
-(NSDictionary *)substrokesByStrokeIdentifier;
-(NSSet *)textStrokeIdentifiers;
-(NSSet *)nontextCandidates;
-(id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 substrokesByStrokeIdentifier:(id)arg2 nontextCandidates:(id)arg3 ;
-(BOOL)isEqualToStrokeClassificationResult:(id)arg1 ;
-(BOOL)isEquivalentToStrokeClassificationResult:(id)arg1 ;
@end

