/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAcceptedCandidate:(id)arg1 ;
-(void)setTextToCommit:(id)arg1 ;
-(void)setForwardDeletionCount:(unsigned long long)arg1 ;
-(void)setInsertionTextAfterSelection:(id)arg1 ;
-(void)setShortcutConversion:(id)arg1 ;
-(void)setHandwritingStrokesToDelete:(id)arg1 ;
-(long long)positionOffset;
-(void)setPositionOffset:(long long)arg1 ;
-(BOOL)didBeginOutput;
-(void)setDidBeginOutput:(BOOL)arg1 ;
@end

