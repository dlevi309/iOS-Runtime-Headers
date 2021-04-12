/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface UIWebPDFLinkAction : NSObject {

	int type;
	NSString* title;
	/*^block*/id handler;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) id handler; 
-(void)setHandler:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)handler;
-(NSString *)title;
-(void)dealloc;
@end

