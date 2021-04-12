/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHandler:(id)arg1 ;
-(long long)icon;
-(void)setIcon:(long long)arg1 ;
-(id)_init;
-(id)handler;
-(void)setRemoteItemTitle:(NSString *)arg1 ;
-(NSString *)remoteItemTitle;
-(BOOL)isRemoteItemCollection;
-(long long)remoteItemIcon;
-(void)handleRemoteAction;
@end

