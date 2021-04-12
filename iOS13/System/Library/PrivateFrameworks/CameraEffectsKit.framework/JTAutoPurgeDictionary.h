/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JTAutoPurgeDictionaryDelegate;
@class NSMutableDictionary;

@interface JTAutoPurgeDictionary : NSObject {

	NSMutableDictionary* _dictionary;
	BOOL _suspendPurging;
	id<JTAutoPurgeDictionaryDelegate> _delegate;

}

@property (readonly) unsigned long long count; 
@property (assign) BOOL suspendPurging;                                                      //@synthesize suspendPurging=_suspendPurging - In the implementation block
@property (assign,nonatomic,__weak) id<JTAutoPurgeDictionaryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(id<JTAutoPurgeDictionaryDelegate>)delegate;
-(void)setDelegate:(id<JTAutoPurgeDictionaryDelegate>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)highMemoryWarning;
-(BOOL)suspendPurging;
-(id)copyOfDictionary;
-(void)setSuspendPurging:(BOOL)arg1 ;
@end

