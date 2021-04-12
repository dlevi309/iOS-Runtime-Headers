/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <UIKitCore/UIButton.h>

@class NSURL;

@interface CANodeButton : UIButton {

	BOOL hasLabel;
	NSURL* _url;

}

@property (retain) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (assign) BOOL hasLabel; 
-(id)init;
-(void)dealloc;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)layoutSubviews;
-(BOOL)hasLabel;
-(void)setHasLabel:(BOOL)arg1 ;
@end

