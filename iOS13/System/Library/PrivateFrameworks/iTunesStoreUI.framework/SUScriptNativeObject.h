/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)object;
-(void)lock;
-(void)unlock;
-(void)setObject:(id)arg1 ;
-(SUScriptObject *)scriptObject;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(void)setScriptObject:(SUScriptObject *)arg1 ;
-(id)weakObject;
-(id)strongObject;
-(NSLock *)internalLock;
-(void)setWeakObject:(id)arg1 ;
-(void)setStrongObject:(id)arg1 ;
-(void)setInternalLock:(NSLock *)arg1 ;
@end

