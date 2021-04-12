/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSLocale, NSString;

@interface TITypingSessionAligned : NSObject <NSSecureCoding> {

	BOOL _success;
	BOOL _containsCPEntries;
	NSArray* _layouts;
	NSLocale* _locale;
	NSArray* _alignedEntries;
	NSString* _alignedText;
	NSString* _highConfAlignedSubSegment;
	unsigned long long _firstCPEntryIndex;

}

@property (nonatomic,retain) NSArray * alignedEntries;                          //@synthesize alignedEntries=_alignedEntries - In the implementation block
@property (nonatomic,retain) NSString * alignedText;                            //@synthesize alignedText=_alignedText - In the implementation block
@property (nonatomic,retain) NSString * highConfAlignedSubSegment;              //@synthesize highConfAlignedSubSegment=_highConfAlignedSubSegment - In the implementation block
@property (assign,nonatomic) BOOL success;                                      //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL containsCPEntries;                            //@synthesize containsCPEntries=_containsCPEntries - In the implementation block
@property (assign,nonatomic) unsigned long long firstCPEntryIndex;              //@synthesize firstCPEntryIndex=_firstCPEntryIndex - In the implementation block
@property (nonatomic,readonly) NSArray * layouts;                               //@synthesize layouts=_layouts - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                               //@synthesize locale=_locale - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)alignedEntryForWord:(id)arg1 ;
+(id)alignedPathTouchesForWord:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHighConfAlignedSubSegment:(NSString *)arg1 ;
-(NSLocale *)locale;
-(id)initWithSession:(id)arg1 ;
-(BOOL)containsCPEntries;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)highConfAlignedSubSegment;
-(void)setFirstCPEntryIndex:(unsigned long long)arg1 ;
-(BOOL)compareForConfidenceContextA:(id)arg1 contextB:(id)arg2 ;
-(void)getAlignedTextAndConfidence;
-(id)alignedWordsFromSession:(id)arg1 ;
-(void)setAlignedText:(NSString *)arg1 ;
-(NSArray *)layouts;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)alignedEntries;
-(unsigned long long)firstCPEntryIndex;
-(void)setAlignedEntries:(NSArray *)arg1 ;
-(id)restrictedAlignedSessionWithWordLimit:(unsigned long long)arg1 ;
-(NSString *)alignedText;
-(void)setContainsCPEntries:(BOOL)arg1 ;
-(id)textToAppendForEntry:(id)arg1 sessionIndx:(unsigned long long)arg2 ;
@end

