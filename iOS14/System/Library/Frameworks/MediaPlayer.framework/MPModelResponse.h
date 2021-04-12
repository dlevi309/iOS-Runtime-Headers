/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPModelRequest, MPPropertySet, MPSectionedCollection;

@interface MPModelResponse : NSObject {

	BOOL _valid;
	MPModelRequest* _request;
	MPPropertySet* _deferredSectionProperties;
	MPPropertySet* _deferredItemProperties;
	MPSectionedCollection* _results;

}

@property (nonatomic,retain) MPPropertySet * deferredSectionProperties;              //@synthesize deferredSectionProperties=_deferredSectionProperties - In the implementation block
@property (nonatomic,retain) MPPropertySet * deferredItemProperties;                 //@synthesize deferredItemProperties=_deferredItemProperties - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * results;                          //@synthesize results=_results - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy,readonly) MPModelRequest * request;                        //@synthesize request=_request - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
-(void)setResults:(MPSectionedCollection *)arg1 ;
-(void)_invalidate;
-(MPSectionedCollection *)results;
-(id)init;
-(id)debugDescription;
-(MPModelRequest *)request;
-(void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPPropertySet *)deferredSectionProperties;
-(MPPropertySet *)deferredItemProperties;
-(void)setDeferredSectionProperties:(MPPropertySet *)arg1 ;
-(void)setDeferredItemProperties:(MPPropertySet *)arg1 ;
-(id)description;
-(BOOL)isValid;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)isEmpty;
@end

