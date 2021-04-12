/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class WebScriptObject, NSLock, NSString;

@interface SUScriptEventListener : NSObject {

	WebScriptObject* _callback;
	NSLock* _lock;
	NSString* _name;
	BOOL _useCapture;

}

@property (retain) WebScriptObject * callback;              //@synthesize callback=_callback - In the implementation block
@property (copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign) BOOL shouldUseCapture;                   //@synthesize useCapture=_useCapture - In the implementation block
-(WebScriptObject *)callback;
-(void)setCallback:(WebScriptObject *)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setShouldUseCapture:(BOOL)arg1 ;
-(BOOL)shouldUseCapture;
@end

