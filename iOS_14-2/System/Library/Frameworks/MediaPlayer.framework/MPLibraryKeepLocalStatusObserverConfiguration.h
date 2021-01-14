/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject {

	long long _enableState;
	MPModelObject* _identifyingModelObject;

}

@property (assign,nonatomic) long long enableState;                               //@synthesize enableState=_enableState - In the implementation block
@property (nonatomic,retain) MPModelObject * identifyingModelObject;              //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
-(void)setIdentifyingModelObject:(MPModelObject *)arg1 ;
-(unsigned long long)hash;
-(long long)enableState;
-(void)setEnableState:(long long)arg1 ;
-(MPModelObject *)identifyingModelObject;
-(BOOL)isEqual:(id)arg1 ;
@end

