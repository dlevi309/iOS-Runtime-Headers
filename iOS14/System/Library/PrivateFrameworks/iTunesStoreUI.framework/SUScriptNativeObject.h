/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class SUScriptObject, NSLock;

@interface SUScriptNativeObject : NSObject {

	id _strongObject;
	id _weakObject;
	SUScriptObject* _scriptObject;
	NSLock* _internalLock;

}

@property (assign,nonatomic,__weak) id weakObject; 
@property (nonatomic,retain) id strongObject; 
@property (nonatomic,retain) NSLock * internalLock;              //@synthesize internalLock=_internalLock - In the implementation block
@property (retain) id object; 
@property (__weak) SUScriptObject * scriptObject; 
+(id)objectWithNativeObject:(id)arg1 ;
+(id)objectWithNativeObject:(id)arg1 weak:(BOOL)arg2 ;
-(void)unlock;
-(void)setWeakObject:(id)arg1 ;
-(id)init;
-(void)lock;
-(id)object;
-(id)weakObject;
-(void)setObject:(id)arg1 ;
-(id)strongObject;
-(SUScriptObject *)scriptObject;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(void)setScriptObject:(SUScriptObject *)arg1 ;
-(NSLock *)internalLock;
-(void)setStrongObject:(id)arg1 ;
-(void)setInternalLock:(NSLock *)arg1 ;
@end

