/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, CACRecordedUserActionFlow;

@interface CACRecordedUserAction : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _identifier;
	NSDictionary* _targetAttributes;
	BOOL _canIgnoreFailure;
	id _object;
	CACRecordedUserActionFlow* _ownerFlow;

}

@property (readonly) BOOL isSpokenCommand; 
@property (readonly) BOOL isReplayableGesture; 
@property (readonly) BOOL canIgnoreFailure; 
@property (__weak) CACRecordedUserActionFlow * ownerFlow;              //@synthesize ownerFlow=_ownerFlow - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSpokenCommand:(id)arg1 ;
-(void)beginExecutingWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)plistDescription;
-(id)_derivedTargetAttributesFromSpokenCommand:(id)arg1 ;
-(BOOL)isSpokenCommand;
-(id)_dictionaryFromRect:(CGRect)arg1 ;
-(CGRect)_rectFromDictionary:(id)arg1 ;
-(id)_labeledElementsFromMatchingCriteria:(id)arg1 ;
-(id)spokenCommand;
-(BOOL)isReplayableGesture;
-(BOOL)canIgnoreFailure;
-(CACRecordedUserActionFlow *)ownerFlow;
-(void)setOwnerFlow:(CACRecordedUserActionFlow *)arg1 ;
@end

