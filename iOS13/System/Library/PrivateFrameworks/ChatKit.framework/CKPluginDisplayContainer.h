/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class IMPluginPayload, UIImage;

@interface CKPluginDisplayContainer : NSObject <NSSecureCoding> {

	IMPluginPayload* _pluginPayload;
	UIImage* _composeImage;

}

@property (nonatomic,retain) IMPluginPayload * pluginPayload;              //@synthesize pluginPayload=_pluginPayload - In the implementation block
@property (nonatomic,retain) UIImage * composeImage;                       //@synthesize composeImage=_composeImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pluginDisplayContinerWithPluginPayload:(id)arg1 composeImage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)itemProvider;
-(id)pasteboardItem;
-(IMPluginPayload *)pluginPayload;
-(UIImage *)composeImage;
-(void)setPluginPayload:(IMPluginPayload *)arg1 ;
-(void)setComposeImage:(UIImage *)arg1 ;
@end

