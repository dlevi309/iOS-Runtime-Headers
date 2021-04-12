/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/

#import <BrailleTranslation/BRLTTranslationService.h>

@class BRLTSLoopbackTranslationService;

@interface BRLTLoopbackTranslationService : BRLTTranslationService {

	BRLTSLoopbackTranslationService* _loopbackService;

}

@property (nonatomic,retain) BRLTSLoopbackTranslationService * loopbackService;              //@synthesize loopbackService=_loopbackService - In the implementation block
-(BOOL)isLoopback;
-(id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 loopbackService:(id)arg3 ;
-(BRLTSLoopbackTranslationService *)loopbackService;
-(void)setLoopbackService:(BRLTSLoopbackTranslationService *)arg1 ;
@end

