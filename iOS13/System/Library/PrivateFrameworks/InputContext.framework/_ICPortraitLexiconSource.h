/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)warmUp;
-(void)hibernate;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)startLoadingWithManager:(id)arg1 ;
-(id)_makePPNamedEntityStore;
-(id)_makeContactDelegate;
-(id)_makeNamedEntityDelegate;
-(void)_reloadNamedEntityDataAfterReset;
@end

