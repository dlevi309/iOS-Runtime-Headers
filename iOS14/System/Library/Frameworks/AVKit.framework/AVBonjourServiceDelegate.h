/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVBonjourServiceDelegate <NSObject>
@optional
-(id)bonjourServiceAdditionalTXTRecordInfo:(id)arg1;

@required
-(void)bonjourService:(id)arg1 didAcceptConnectionChannel:(id)arg2;
-(void)bonjourService:(id)arg1 didCloseChannel:(id)arg2;

@end

