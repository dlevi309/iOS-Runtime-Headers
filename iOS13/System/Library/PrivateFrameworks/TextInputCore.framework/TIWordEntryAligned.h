/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, TIWordEntry;

@interface TIWordEntryAligned : NSObject <NSSecureCoding> {

	BOOL _isContinuousPathConversion;
	int _inSessionAlignmentConfidence;
	NSArray* _alignedKeyboardInputs;
	NSString* _expectedString;
	TIWordEntry* _originalWord;
	NSArray* _alignedTouches;

}

@property (nonatomic,retain) NSArray * alignedTouches;                      //@synthesize alignedTouches=_alignedTouches - In the implementation block
@property (nonatomic,retain) NSArray * alignedKeyboardInputs;               //@synthesize alignedKeyboardInputs=_alignedKeyboardInputs - In the implementation block
@property (nonatomic,copy) NSString * expectedString;                       //@synthesize expectedString=_expectedString - In the implementation block
@property (nonatomic,retain) TIWordEntry * originalWord;                    //@synthesize originalWord=_originalWord - In the implementation block
@property (assign,nonatomic) BOOL isContinuousPathConversion;               //@synthesize isContinuousPathConversion=_isContinuousPathConversion - In the implementation block
@property (assign,nonatomic) int inSessionAlignmentConfidence;              //@synthesize inSessionAlignmentConfidence=_inSessionAlignmentConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isContinuousPathConversion;
-(NSArray *)alignedTouches;
-(NSArray *)alignedKeyboardInputs;
-(void)setAlignedKeyboardInputs:(NSArray *)arg1 ;
-(NSString *)expectedString;
-(void)setExpectedString:(NSString *)arg1 ;
-(TIWordEntry *)originalWord;
-(void)setOriginalWord:(TIWordEntry *)arg1 ;
-(void)setIsContinuousPathConversion:(BOOL)arg1 ;
-(int)inSessionAlignmentConfidence;
-(void)setInSessionAlignmentConfidence:(int)arg1 ;
-(void)setAlignedTouches:(NSArray *)arg1 ;
@end

