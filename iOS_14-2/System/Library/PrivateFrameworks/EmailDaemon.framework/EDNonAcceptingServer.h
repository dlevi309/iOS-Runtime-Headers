/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSMutableArray, NSString;

@interface EDNonAcceptingServer : NSObject <NSXPCListenerDelegate, EFLoggable> {

	NSMutableArray* _listeners;

}

@property (nonatomic,retain) NSMutableArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(NSMutableArray *)listeners;
-(void)setListeners:(NSMutableArray *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithMachServiceNames:(id)arg1 ;
@end

