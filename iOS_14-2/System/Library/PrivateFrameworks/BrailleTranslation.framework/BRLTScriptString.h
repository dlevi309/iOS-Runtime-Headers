/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface BRLTScriptString : NSObject <NSCopying> {

	NSString* _string;
	NSMutableArray* _tokenRanges;
	NSRange _selection;
	NSRange _focus;

}

@property (nonatomic,retain) NSMutableArray * tokenRanges;              //@synthesize tokenRanges=_tokenRanges - In the implementation block
@property (nonatomic,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSRange selection;                       //@synthesize selection=_selection - In the implementation block
@property (nonatomic,readonly) NSRange focus;                           //@synthesize focus=_focus - In the implementation block
-(NSRange)focus;
-(id)init;
-(id)description;
-(NSRange)selection;
-(NSString *)string;
-(NSMutableArray *)tokenRanges;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithString:(id)arg1 selection:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 selection:(NSRange)arg2 focus:(NSRange)arg3 token:(unsigned long long)arg4 ;
-(void)_addSelectionRange:(NSRange)arg1 ;
-(BOOL)isEqualToScriptString:(id)arg1 ;
-(NSRange)_backwardEditingAtomForCursorLocation:(unsigned long long)arg1 isBreak:(BOOL*)arg2 ;
-(NSRange)backwardEditingAtom;
-(NSRange)forwardEditingAtom;
-(NSRange)_backwardEditingAtomForSelection:(NSRange)arg1 isBreak:(BOOL*)arg2 ;
-(NSRange)forwardEditingAtomForCursorLocation:(unsigned long long)arg1 ;
-(void)addString:(id)arg1 selection:(NSRange)arg2 focus:(NSRange)arg3 token:(unsigned long long)arg4 ;
-(NSRange)deleteMergeAtom;
-(void)setTokenRanges:(NSMutableArray *)arg1 ;
@end

