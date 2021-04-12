/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <libobjc.A.dylib/_ICLexiconSourcing.h>
#import <libobjc.A.dylib/_ICFeedbackAccepting.h>

@class _ICLexiconManager, PPContactStore, PPContactNameRecordLoadingDelegate, PPNamedEntityStore, PPNamedEntityRecordLoadingDelegate;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting> {

	_ICLexiconManager* _manager;
	PPContactStore* _contactStore;
	PPContactNameRecordLoadingDelegate* _contactDelegate;
	PPNamedEntityStore* _namedEntityStore;
	PPNamedEntityRecordLoadingDelegate* _namedEntityDelegate;

}
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)hibernate;
-(void)_reloadNamedEntityDataAfterReset;
-(void)warmUp;
-(id)init;
-(id)_makeContactDelegate;
-(id)_makeNamedEntityDelegate;
-(id)_makePPNamedEntityStore;
-(void)startLoadingWithManager:(id)arg1 ;
@end

