/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIViewControllerPreviewAction : NSObject <NSCopying> {

	NSString* _title;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)actionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_initWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

