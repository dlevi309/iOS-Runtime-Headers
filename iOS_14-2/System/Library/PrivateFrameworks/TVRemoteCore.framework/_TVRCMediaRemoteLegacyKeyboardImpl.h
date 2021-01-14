/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/_TVRCMediaRemoteKeyboardAdapterDelegate.h>
#import <TVRemoteCore/_TVRXKeyboardImpl.h>

@class _TVRXKeyboardController, _TVRCMRTelevisionWrapper, TVRCKeyboardAttributes, _TVRCMediaRemoteKeyboardAdapter, NSString;

@interface _TVRCMediaRemoteLegacyKeyboardImpl : NSObject <_TVRCMediaRemoteKeyboardAdapterDelegate, _TVRXKeyboardImpl> {

	BOOL _editing;
	_TVRXKeyboardController* _keyboardController;
	_TVRCMRTelevisionWrapper* _television;
	TVRCKeyboardAttributes* _currentAttributes;
	_TVRCMediaRemoteKeyboardAdapter* _adapter;

}

@property (assign,nonatomic) BOOL editing;                                                     //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) TVRCKeyboardAttributes * currentAttributes;                       //@synthesize currentAttributes=_currentAttributes - In the implementation block
@property (nonatomic,retain) _TVRCMediaRemoteKeyboardAdapter * adapter;                        //@synthesize adapter=_adapter - In the implementation block
@property (assign,nonatomic,__weak) _TVRXKeyboardController * keyboardController;              //@synthesize keyboardController=_keyboardController - In the implementation block
@property (nonatomic,retain) _TVRCMRTelevisionWrapper * television;                            //@synthesize television=_television - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setText:(id)arg1 ;
-(BOOL)isEditing;
-(void)setAdapter:(_TVRCMediaRemoteKeyboardAdapter *)arg1 ;
-(id)attributes;
-(_TVRCMediaRemoteKeyboardAdapter *)adapter;
-(id)text;
-(_TVRXKeyboardController *)keyboardController;
-(_TVRCMRTelevisionWrapper *)television;
-(void)setEditing:(BOOL)arg1 ;
-(TVRCKeyboardAttributes *)currentAttributes;
-(BOOL)editing;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(void)sendReturnKey;
-(void)setTelevision:(_TVRCMRTelevisionWrapper *)arg1 ;
-(void)_textEditingHandlerUpdatedWithEvent:(unsigned)arg1 session:(id)arg2 ;
-(void)_sessionDidBegin:(id)arg1 ;
-(void)_sessionDidEnd:(id)arg1 ;
-(void)_sessionTextDidChange:(id)arg1 ;
-(void)_sessionAttributesDidChange:(id)arg1 ;
-(void)keyboardAdapter:(id)arg1 receivedUnexpectedTextUpdate:(id)arg2 ;
-(void)setCurrentAttributes:(TVRCKeyboardAttributes *)arg1 ;
@end

