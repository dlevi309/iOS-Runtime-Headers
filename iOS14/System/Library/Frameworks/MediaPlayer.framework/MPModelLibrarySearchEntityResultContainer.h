/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelLibrarySearchScope, MPMediaLibraryEntityTranslationContext;

@interface MPModelLibrarySearchEntityResultContainer : NSObject {

	MPModelLibrarySearchScope* _scope;
	MPMediaLibraryEntityTranslationContext* _entityTranslationContext;
	shared_ptr<mlcore::EntityQueryResult>* _entityQueryResult;

}

@property (nonatomic,readonly) shared_ptr<mlcore::EntityQueryResult>* entityQueryResult;                       //@synthesize entityQueryResult=_entityQueryResult - In the implementation block
@property (nonatomic,copy,readonly) MPModelLibrarySearchScope * scope;                                         //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) MPMediaLibraryEntityTranslationContext * entityTranslationContext;              //@synthesize entityTranslationContext=_entityTranslationContext - In the implementation block
-(MPModelLibrarySearchScope *)scope;
-(shared_ptr<mlcore::EntityQueryResult>*)entityQueryResult;
-(MPMediaLibraryEntityTranslationContext *)entityTranslationContext;
-(id)initWithEntityQueryResult:(shared_ptr<mlcore::EntityQueryResult>*)arg1 forScope:(id)arg2 entityTranslationContext:(id)arg3 ;
@end

