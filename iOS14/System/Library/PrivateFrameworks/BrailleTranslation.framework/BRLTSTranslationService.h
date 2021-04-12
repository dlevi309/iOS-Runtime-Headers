/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/

#import <libobjc.A.dylib/BRLTTranslationServiceInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, BRLTSTranslator;

@interface BRLTSTranslationService : NSObject <BRLTTranslationServiceInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	BRLTSTranslator* _queueTranslator;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BRLTSTranslator * queueTranslator;               //@synthesize queueTranslator=_queueTranslator - In the implementation block
+(id)exportedInterface;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadBrailleBundleForIdentifier:(id)arg1 ;
-(void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(BRLTSTranslator *)queueTranslator;
-(void)setQueueTranslator:(BRLTSTranslator *)arg1 ;
@end

