/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSMutableDictionary;

@interface CACProfanityNode : NSObject {

	NSMutableDictionary* _childMap;
	NSMutableDictionary* _terminalMap;
	NSMutableDictionary* _originalWordMap;

}
-(id)init;
-(id)description;
-(id)childForKey:(id)arg1 ;
-(void)createChildForKey:(id)arg1 ;
-(void)setTerminal:(id)arg1 originalWord:(id)arg2 forKey:(id)arg3 ;
-(id)terminalForKey:(id)arg1 ;
-(id)originalWordForKey:(id)arg1 ;
@end

