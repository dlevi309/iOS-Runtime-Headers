/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIPreviewAction.h>
#import <libobjc.A.dylib/WKPreviewActionItem.h>

@class NSString;

@interface WKPreviewAction : UIPreviewAction <WKPreviewActionItem> {

	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

