/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LegacyGameKit.framework/LegacyGameKit
*/


@class GKPeerPickerViewController;

@interface GKPeerPickerController : NSObject {

	id _picker;

}

@property (nonatomic,readonly) GKPeerPickerViewController * pickerViewController; 
@property (assign,nonatomic) unsigned long long connectionTypesMask; 
@property (assign,nonatomic,__weak) id<GKPeerPickerControllerDelegate> delegate; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
+(void)initialize;
-(id)init;
-(id<GKPeerPickerControllerDelegate>)delegate;
-(void)show;
-(void)setDelegate:(id<GKPeerPickerControllerDelegate>)arg1 ;
-(BOOL)isVisible;
-(GKPeerPickerViewController *)pickerViewController;
-(void)dealloc;
-(void)dismiss;
-(void)setConnectionTypesMask:(unsigned long long)arg1 ;
-(void)_createPicker;
-(unsigned long long)connectionTypesMask;
-(void)peerPickerViewControllerDidCancel:(id)arg1 ;
-(void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3 ;
-(void)peerPickerViewController:(id)arg1 didSelectConnectionType:(unsigned long long)arg2 ;
-(id)peerPickerViewController:(id)arg1 sessionForConnectionType:(unsigned long long)arg2 ;
@end

