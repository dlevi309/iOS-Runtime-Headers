/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSString, CACTextMarkerRange;

@interface CACPhraseMatchResult : NSObject {

	id _userInfo;
	NSString* _matchedString;
	CACTextMarkerRange* _markerRange;

}

@property (retain) id userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSString * matchedString;                      //@synthesize matchedString=_matchedString - In the implementation block
@property (readonly) CACTextMarkerRange * markerRange;              //@synthesize markerRange=_markerRange - In the implementation block
-(id)description;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(long long)location;
-(NSString *)matchedString;
-(CACTextMarkerRange *)markerRange;
-(id)initWithMarkerRange:(id)arg1 matchedString:(id)arg2 userInfo:(id)arg3 ;
@end

