/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
@class NSString, AXSSDialectMap, NSMutableOrderedSet;

@interface AXSSLanguageTag : NSObject {

	BOOL _createdFromNewline;
	NSString* _taggedString;
	long long _offsetToInitialLocation;
	NSString* _content;
	AXSSDialectMap* _dialect;
	NSMutableOrderedSet* _predictedSecondaryDialects;
	NSRange _taggedRange;

}

@property (nonatomic,readonly) NSRange taggedRange;                                         //@synthesize taggedRange=_taggedRange - In the implementation block
@property (nonatomic,copy,readonly) NSString * taggedString;                                //@synthesize taggedString=_taggedString - In the implementation block
@property (assign,nonatomic) long long offsetToInitialLocation;                             //@synthesize offsetToInitialLocation=_offsetToInitialLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * content;                                     //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) AXSSDialectMap * dialect;                                    //@synthesize dialect=_dialect - In the implementation block
@property (nonatomic,readonly) BOOL createdFromNewline;                                     //@synthesize createdFromNewline=_createdFromNewline - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * predictedSecondaryDialects;              //@synthesize predictedSecondaryDialects=_predictedSecondaryDialects - In the implementation block
-(NSString *)content;
-(NSMutableOrderedSet *)predictedSecondaryDialects;
-(void)setPredictedSecondaryDialects:(NSMutableOrderedSet *)arg1 ;
-(void)addPredictedSecondaryDialects:(id)arg1 ;
-(AXSSDialectMap *)dialect;
-(id)description;
-(BOOL)createdFromNewline;
-(NSRange)taggedRange;
-(NSString *)taggedString;
-(id)initWithDialect:(id)arg1 range:(NSRange)arg2 content:(id)arg3 createdFromNewline:(BOOL)arg4 ;
-(long long)offsetToInitialLocation;
-(void)setOffsetToInitialLocation:(long long)arg1 ;
@end

