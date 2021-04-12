/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSMutableDictionary;

@interface PUReuseQueue : NSObject {

	BOOL _reuseEnabled;
	NSMutableDictionary* __objectCreationBlocksByReuseIdentifier;
	NSMutableDictionary* __reusableObjectsByReuseIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * _objectCreationBlocksByReuseIdentifier;              //@synthesize _objectCreationBlocksByReuseIdentifier=__objectCreationBlocksByReuseIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _reusableObjectsByReuseIdentifier;                   //@synthesize _reusableObjectsByReuseIdentifier=__reusableObjectsByReuseIdentifier - In the implementation block
@property (assign,getter=isReuseEnabled,nonatomic) BOOL reuseEnabled;                                     //@synthesize reuseEnabled=_reuseEnabled - In the implementation block
-(id)init;
-(NSMutableDictionary *)_reusableObjectsByReuseIdentifier;
-(BOOL)isReuseEnabled;
-(void)registerObjectCreationBlock:(/*^block*/id)arg1 withReuseIdentifier:(id)arg2 ;
-(id)dequeueObjectWithReuseIdentifier:(id)arg1 isReused:(BOOL*)arg2 ;
-(void)setReuseEnabled:(BOOL)arg1 ;
-(NSMutableDictionary *)_objectCreationBlocksByReuseIdentifier;
-(void)enqueueObjectForReuse:(id)arg1 withReuseIdentifier:(id)arg2 ;
@end

