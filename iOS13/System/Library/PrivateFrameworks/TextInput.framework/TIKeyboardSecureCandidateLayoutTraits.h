/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardSecureCandidateTextTraits;

@interface TIKeyboardSecureCandidateLayoutTraits : NSObject <NSCopying, NSSecureCoding> {

	BOOL _forceSingleLineLayout;
	unsigned _headerInliningBehavior;
	TIKeyboardSecureCandidateTextTraits* _headerTraitsInOnlyLine;
	TIKeyboardSecureCandidateTextTraits* _headerTraitsInFirstLine;
	TIKeyboardSecureCandidateTextTraits* _inputTraitsInOnlyLine;
	TIKeyboardSecureCandidateTextTraits* _inputTraitsInFirstAndSecondLines;
	TIKeyboardSecureCandidateTextTraits* _inputTraitsInSecondLine;

}

@property (assign,nonatomic) BOOL forceSingleLineLayout;                                                          //@synthesize forceSingleLineLayout=_forceSingleLineLayout - In the implementation block
@property (assign,nonatomic) unsigned headerInliningBehavior;                                                     //@synthesize headerInliningBehavior=_headerInliningBehavior - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateTextTraits * headerTraitsInOnlyLine;                        //@synthesize headerTraitsInOnlyLine=_headerTraitsInOnlyLine - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateTextTraits * headerTraitsInFirstLine;                       //@synthesize headerTraitsInFirstLine=_headerTraitsInFirstLine - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateTextTraits * inputTraitsInOnlyLine;                         //@synthesize inputTraitsInOnlyLine=_inputTraitsInOnlyLine - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateTextTraits * inputTraitsInFirstAndSecondLines;              //@synthesize inputTraitsInFirstAndSecondLines=_inputTraitsInFirstAndSecondLines - In the implementation block
@property (nonatomic,retain) TIKeyboardSecureCandidateTextTraits * inputTraitsInSecondLine;                       //@synthesize inputTraitsInSecondLine=_inputTraitsInSecondLine - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)forceSingleLineLayout;
-(void)setForceSingleLineLayout:(BOOL)arg1 ;
-(unsigned)headerInliningBehavior;
-(void)setHeaderInliningBehavior:(unsigned)arg1 ;
-(TIKeyboardSecureCandidateTextTraits *)headerTraitsInOnlyLine;
-(void)setHeaderTraitsInOnlyLine:(TIKeyboardSecureCandidateTextTraits *)arg1 ;
-(TIKeyboardSecureCandidateTextTraits *)headerTraitsInFirstLine;
-(void)setHeaderTraitsInFirstLine:(TIKeyboardSecureCandidateTextTraits *)arg1 ;
-(TIKeyboardSecureCandidateTextTraits *)inputTraitsInOnlyLine;
-(void)setInputTraitsInOnlyLine:(TIKeyboardSecureCandidateTextTraits *)arg1 ;
-(TIKeyboardSecureCandidateTextTraits *)inputTraitsInFirstAndSecondLines;
-(void)setInputTraitsInFirstAndSecondLines:(TIKeyboardSecureCandidateTextTraits *)arg1 ;
-(TIKeyboardSecureCandidateTextTraits *)inputTraitsInSecondLine;
-(void)setInputTraitsInSecondLine:(TIKeyboardSecureCandidateTextTraits *)arg1 ;
@end

