/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivity.h>

@class NSString, UIPasteboard;

@interface SXPasteboardActionActivity : NSObject <SXActionActivity> {

	NSString* _label;
	unsigned long long _type;
	UIPasteboard* _pasteboard;
	NSString* _string;

}

@property (nonatomic,copy,readonly) UIPasteboard * pasteboard;              //@synthesize pasteboard=_pasteboard - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;                      //@synthesize string=_string - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
-(NSString *)string;
-(unsigned long long)type;
-(NSString *)label;
-(UIPasteboard *)pasteboard;
-(void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2 ;
-(id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 pasteboard:(id)arg3 string:(id)arg4 ;
@end

