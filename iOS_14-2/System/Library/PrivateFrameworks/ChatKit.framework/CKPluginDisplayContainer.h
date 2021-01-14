/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IMPluginPayload, UIImage;

@interface CKPluginDisplayContainer : NSObject <NSSecureCoding> {

	IMPluginPayload* _pluginPayload;
	UIImage* _composeImage;

}

@property (nonatomic,retain) IMPluginPayload * pluginPayload;              //@synthesize pluginPayload=_pluginPayload - In the implementation block
@property (nonatomic,retain) UIImage * composeImage;                       //@synthesize composeImage=_composeImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unarchiveFromData:(id)arg1 error:(id*)arg2 ;
+(id)pluginDisplayContainerWithPluginPayload:(id)arg1 composeImage:(id)arg2 ;
-(id)pasteboardItemProvider;
-(id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(NSRange)arg2 ;
-(IMPluginPayload *)pluginPayload;
-(UIImage *)composeImage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPluginPayload:(IMPluginPayload *)arg1 ;
-(void)setComposeImage:(UIImage *)arg1 ;
@end

