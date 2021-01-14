/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <TextInput/TIKeyboardOutput.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding> {

	BOOL _didBeginOutput;
	long long _positionOffset;

}

@property (assign,nonatomic) long long positionOffset;              //@synthesize positionOffset=_positionOffset - In the implementation block
@property (assign,nonatomic) BOOL didBeginOutput;                   //@synthesize didBeginOutput=_didBeginOutput - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)outputWithKeyboardOutput:(id)arg1 ;
-(long long)positionOffset;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTextToCommit:(id)arg1 ;
-(void)setAcceptedCandidate:(id)arg1 ;
-(void)setForwardDeletionCount:(unsigned long long)arg1 ;
-(void)setInsertionTextAfterSelection:(id)arg1 ;
-(void)setShortcutConversion:(id)arg1 ;
-(void)setHandwritingStrokesToDelete:(id)arg1 ;
-(void)setPositionOffset:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)didBeginOutput;
-(void)setDidBeginOutput:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

