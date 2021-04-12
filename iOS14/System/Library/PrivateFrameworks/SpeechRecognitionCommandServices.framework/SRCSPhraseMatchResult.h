/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


@protocol SRCSTextMarkerRangeProtocol;
@class NSString;

@interface SRCSPhraseMatchResult : NSObject {

	id _userInfo;
	NSString* _matchedString;
	id<SRCSTextMarkerRangeProtocol> _markerRange;

}

@property (retain) id userInfo;                                                //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSString * matchedString;                                 //@synthesize matchedString=_matchedString - In the implementation block
@property (readonly) id<SRCSTextMarkerRangeProtocol> markerRange;              //@synthesize markerRange=_markerRange - In the implementation block
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(long long)location;
-(id)description;
-(NSString *)matchedString;
-(id<SRCSTextMarkerRangeProtocol>)markerRange;
-(id)initWithMarkerRange:(id)arg1 matchedString:(id)arg2 userInfo:(id)arg3 ;
@end

