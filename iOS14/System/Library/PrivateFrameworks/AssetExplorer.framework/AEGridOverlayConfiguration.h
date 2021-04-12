/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/


@interface AEGridOverlayConfiguration : NSObject {

	BOOL _showVideoDecoration;
	BOOL _showCloudDecoration;
	BOOL _showLoopDecoration;

}

@property (nonatomic,readonly) BOOL showVideoDecoration;              //@synthesize showVideoDecoration=_showVideoDecoration - In the implementation block
@property (nonatomic,readonly) BOOL showCloudDecoration;              //@synthesize showCloudDecoration=_showCloudDecoration - In the implementation block
@property (nonatomic,readonly) BOOL showLoopDecoration;               //@synthesize showLoopDecoration=_showLoopDecoration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithShowCloudDecoration:(BOOL)arg1 showVideoDecoration:(BOOL)arg2 showLoopDecoration:(BOOL)arg3 ;
-(BOOL)showVideoDecoration;
-(BOOL)showCloudDecoration;
-(BOOL)showLoopDecoration;
@end

