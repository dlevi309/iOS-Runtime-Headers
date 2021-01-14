/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<JTAutoPurgeDictionaryDelegate>)delegate;
-(unsigned long long)count;
-(void)setDelegate:(id<JTAutoPurgeDictionaryDelegate>)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)highMemoryWarning;
-(BOOL)suspendPurging;
-(id)copyOfDictionary;
-(void)setSuspendPurging:(BOOL)arg1 ;
@end

