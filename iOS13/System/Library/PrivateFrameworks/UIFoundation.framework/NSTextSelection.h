/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSTextLocation;
@class NSArray, NSDictionary;

@interface NSTextSelection : NSObject <NSSecureCoding> {

	BOOL _transient;
	BOOL _logical;
	NSArray* _textRanges;
	long long _granularity;
	long long _affinity;
	double _anchorPoint;
	id<NSTextLocation> _secondarySelectionLocation;
	NSDictionary* _typingAttributes;

}

@property (copy,readonly) NSArray * textRanges;                                //@synthesize textRanges=_textRanges - In the implementation block
@property (readonly) long long granularity;                                    //@synthesize granularity=_granularity - In the implementation block
@property (readonly) long long affinity;                                       //@synthesize affinity=_affinity - In the implementation block
@property (getter=isTransient,readonly) BOOL transient;                        //@synthesize transient=_transient - In the implementation block
@property (assign) double anchorPoint;                                         //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (getter=isLogical) BOOL logical;                                     //@synthesize logical=_logical - In the implementation block
@property (retain) id<NSTextLocation> secondarySelectionLocation;              //@synthesize secondarySelectionLocation=_secondarySelectionLocation - In the implementation block
@property (copy) NSDictionary * typingAttributes;                              //@synthesize typingAttributes=_typingAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)typingAttributes;
-(id)initWithRanges:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3 ;
-(id)initWithRange:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3 ;
-(id)initWithLocation:(id)arg1 affinity:(long long)arg2 ;
-(NSArray *)textRanges;
-(long long)granularity;
-(long long)affinity;
-(BOOL)isTransient;
-(double)anchorPoint;
-(void)setAnchorPoint:(double)arg1 ;
-(BOOL)isLogical;
-(void)setLogical:(BOOL)arg1 ;
-(id<NSTextLocation>)secondarySelectionLocation;
-(void)setSecondarySelectionLocation:(id<NSTextLocation>)arg1 ;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
@end

