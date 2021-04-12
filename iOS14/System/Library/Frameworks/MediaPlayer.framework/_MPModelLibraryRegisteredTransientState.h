/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)addState;
-(void)setToken:(NSUUID *)arg1 ;
-(MPSectionedCollection *)modelObjects;
-(NSUUID *)token;
-(long long)keepLocalState;
-(MPSectionedCollection *)relatedModelObjects;
-(void)setKeepLocalState:(long long)arg1 ;
-(void)setRelatedModelObjects:(MPSectionedCollection *)arg1 ;
-(void)setModelObjects:(MPSectionedCollection *)arg1 ;
-(void)setAddState:(long long)arg1 ;
@end

