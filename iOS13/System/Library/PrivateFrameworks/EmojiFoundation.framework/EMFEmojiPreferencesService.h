/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, EMFEmojiPreferences, NSString;

@interface EMFEmojiPreferencesService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	EMFEmojiPreferences* _preferences;

}

@property (nonatomic,retain) EMFEmojiPreferences * preferences;                         //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServiceWithMachName:(id)arg1 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPreferences:(EMFEmojiPreferences *)arg1 ;
-(EMFEmojiPreferences *)preferences;
-(id)initWithMachName:(id)arg1 ;
-(void)_createPreferencesIfNecessary;
@end

