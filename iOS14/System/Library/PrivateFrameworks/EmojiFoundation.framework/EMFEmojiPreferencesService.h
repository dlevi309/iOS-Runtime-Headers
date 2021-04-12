/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(EMFEmojiPreferences *)preferences;
-(void)setPreferences:(EMFEmojiPreferences *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)initWithMachName:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
-(void)_createPreferencesIfNecessary;
@end

