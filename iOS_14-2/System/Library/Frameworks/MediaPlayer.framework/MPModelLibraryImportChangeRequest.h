/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject, MPSectionedCollection;

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying> {

	BOOL _shouldLibraryAdd;
	MPModelObject* _referralObject;
	MPSectionedCollection* _modelObjects;

}

@property (nonatomic,copy) MPModelObject * referralObject;                    //@synthesize referralObject=_referralObject - In the implementation block
@property (nonatomic,copy) MPSectionedCollection * modelObjects;              //@synthesize modelObjects=_modelObjects - In the implementation block
@property (assign,nonatomic) BOOL shouldLibraryAdd;                           //@synthesize shouldLibraryAdd=_shouldLibraryAdd - In the implementation block
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldLibraryAdd;
-(void)setShouldLibraryAdd:(BOOL)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPSectionedCollection *)modelObjects;
-(void)setModelObjects:(MPSectionedCollection *)arg1 ;
-(MPModelObject *)referralObject;
-(void)setReferralObject:(MPModelObject *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

