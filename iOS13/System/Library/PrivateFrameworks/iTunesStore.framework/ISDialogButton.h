/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSDictionary;

@interface ISDialogButton : NSObject <SSXPCCoding> {

	int _actionType;
	id _parameter;
	NSString* _title;
	long long _urlType;
	NSString* _subtarget;
	NSDictionary* _dictionary;
	BOOL _tidContinue;
	long long _tag;

}

@property (retain) NSDictionary * dictionary;                        //@synthesize dictionary=_dictionary - In the implementation block
@property (assign) int actionType;                                   //@synthesize actionType=_actionType - In the implementation block
@property (retain) id parameter;                                     //@synthesize parameter=_parameter - In the implementation block
@property (readonly) BOOL shouldContinueTouchIDSession;              //@synthesize tidContinue=_tidContinue - In the implementation block
@property (retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (copy) NSString * subtarget;                               //@synthesize subtarget=_subtarget - In the implementation block
@property (assign) long long urlType;                                //@synthesize urlType=_urlType - In the implementation block
@property (assign) long long tag;                                    //@synthesize tag=_tag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithTitle:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(long long)urlType;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(id)parameter;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)shouldContinueTouchIDSession;
-(void)loadFromDictionary:(id)arg1 ;
-(NSString *)subtarget;
-(void)performDefaultActionForDialog:(id)arg1 ;
-(void)setActionTypeWithString:(id)arg1 ;
-(void)setParameter:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 superficial:(BOOL)arg2 ;
-(int)_actionTypeForString:(id)arg1 ;
-(void)setSubtarget:(NSString *)arg1 ;
-(long long)_urlTypeForString:(id)arg1 ;
-(void)setUrlType:(long long)arg1 ;
-(void)_openURLWithRequest:(id)arg1 ;
@end

