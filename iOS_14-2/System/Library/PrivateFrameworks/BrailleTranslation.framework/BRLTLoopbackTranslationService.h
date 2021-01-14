/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/

#import <BrailleTranslation/BRLTTranslationService.h>

@class BRLTSLoopbackTranslationService;

@interface BRLTLoopbackTranslationService : BRLTTranslationService {

	BRLTSLoopbackTranslationService* _loopbackService;

}

@property (nonatomic,retain) BRLTSLoopbackTranslationService * loopbackService;              //@synthesize loopbackService=_loopbackService - In the implementation block
-(id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 loopbackService:(id)arg3 ;
-(BOOL)isLoopback;
-(BRLTSLoopbackTranslationService *)loopbackService;
-(void)setLoopbackService:(BRLTSLoopbackTranslationService *)arg1 ;
@end

