/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasLabel;
-(NSURL *)url;
-(void)layoutSubviews;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setHasLabel:(BOOL)arg1 ;
-(void)dealloc;
@end

