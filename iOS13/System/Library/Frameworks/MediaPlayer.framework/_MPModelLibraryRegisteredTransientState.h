/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPSectionedCollection, NSUUID;

@interface _MPModelLibraryRegisteredTransientState : NSObject {

	long long _addState;
	long long _keepLocalState;
	MPSectionedCollection* _modelObjects;
	MPSectionedCollection* _relatedModelObjects;
	NSUUID* _token;

}

@property (assign,nonatomic) long long addState;                                     //@synthesize addState=_addState - In the implementation block
@property (assign,nonatomic) long long keepLocalState;                               //@synthesize keepLocalState=_keepLocalState - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * modelObjects;                     //@synthesize modelObjects=_modelObjects - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * relatedModelObjects;              //@synthesize relatedModelObjects=_relatedModelObjects - In the implementation block
@property (nonatomic,copy) NSUUID * token;                                           //@synthesize token=_token - In the implementation block
-(NSUUID *)token;
-(void)setToken:(NSUUID *)arg1 ;
-(MPSectionedCollection *)modelObjects;
-(long long)keepLocalState;
-(MPSectionedCollection *)relatedModelObjects;
-(long long)addState;
-(void)setRelatedModelObjects:(MPSectionedCollection *)arg1 ;
-(void)setModelObjects:(MPSectionedCollection *)arg1 ;
-(void)setKeepLocalState:(long long)arg1 ;
-(void)setAddState:(long long)arg1 ;
@end

