/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@class NSString;

@interface MCDeleteInput : MCKeyboardInput {

	BOOL _deleteBySyllable;
	BOOL _shouldDeleteAcceptCandidateInput;
	NSString* _deletedText;

}

@property (nonatomic,readonly) NSString * deletedText;                             //@synthesize deletedText=_deletedText - In the implementation block
@property (nonatomic,readonly) BOOL deleteBySyllable;                              //@synthesize deleteBySyllable=_deleteBySyllable - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeleteAcceptCandidateInput;              //@synthesize shouldDeleteAcceptCandidateInput=_shouldDeleteAcceptCandidateInput - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithDeletedText:(id)arg1 deleteBySyllable:(BOOL)arg2 shouldDeleteAcceptCandidateInput:(BOOL)arg3 ;
-(NSString *)deletedText;
-(BOOL)deleteBySyllable;
-(BOOL)shouldDeleteAcceptCandidateInput;
@end

