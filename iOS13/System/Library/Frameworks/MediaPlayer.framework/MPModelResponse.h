/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)debugDescription;
-(void)_invalidate;
-(BOOL)isEmpty;
-(BOOL)isValid;
-(MPSectionedCollection *)results;
-(MPModelRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)setResults:(MPSectionedCollection *)arg1 ;
-(void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MPPropertySet *)deferredSectionProperties;
-(void)setDeferredSectionProperties:(MPPropertySet *)arg1 ;
-(MPPropertySet *)deferredItemProperties;
-(void)setDeferredItemProperties:(MPPropertySet *)arg1 ;
@end

