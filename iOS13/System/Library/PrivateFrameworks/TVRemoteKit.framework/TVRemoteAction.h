/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteKit.framework/TVRemoteKit
*/

#import <TVRemoteKit/TVRemoteItem.h>

@class NSString;

@interface TVRemoteAction : NSObject <TVRemoteItem> {

	NSString* _remoteItemTitle;
	/*^block*/id _handler;
	long long _icon;

}

@property (nonatomic,copy) NSString * remoteItemTitle;              //@synthesize remoteItemTitle=_remoteItemTitle - In the implementation block
@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) long long icon;                        //@synthesize icon=_icon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithTitle:(id)arg1 icon:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)handler;
-(id)_init;
-(void)setHandler:(id)arg1 ;
-(long long)icon;
-(void)setIcon:(long long)arg1 ;
-(void)setRemoteItemTitle:(NSString *)arg1 ;
-(NSString *)remoteItemTitle;
-(BOOL)isRemoteItemCollection;
-(long long)remoteItemIcon;
-(void)handleRemoteAction;
@end

