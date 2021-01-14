/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivity.h>

@class NSString, UIImage, UIPasteboard;

@interface SXPasteboardActionActivity : NSObject <SXActionActivity> {

	NSString* _label;
	unsigned long long _type;
	UIImage* _image;
	UIPasteboard* _pasteboard;
	NSString* _string;

}

@property (nonatomic,copy,readonly) UIPasteboard * pasteboard;              //@synthesize pasteboard=_pasteboard - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;                      //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIPasteboard *)pasteboard;
-(UIImage *)image;
-(unsigned long long)type;
-(NSString *)string;
-(NSString *)label;
-(void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2 ;
-(id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 pasteboard:(id)arg3 string:(id)arg4 ;
@end

