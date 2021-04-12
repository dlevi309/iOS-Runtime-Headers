/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class NSString, _TVRCMediaRemoteLegacyKeyboardImpl, _TVRCMediaRemoteRemoteTextInputKeyboardImpl, _TVRCMRTelevisionWrapper;

@interface _TVRCMediaRemoteKeyboardImplManager : NSObject {

	NSString* _version;
	_TVRCMediaRemoteLegacyKeyboardImpl* _legacyImpl;
	_TVRCMediaRemoteRemoteTextInputKeyboardImpl* _rtiImpl;
	_TVRCMRTelevisionWrapper* _television;

}

@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;              //@synthesize television=_television - In the implementation block
-(_TVRCMRTelevisionWrapper *)television;
-(id)keyboardImpl;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(id)initWithTelevisionSystemVersion:(id)arg1 ;
@end

