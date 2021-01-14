/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, _LTTranslationService, _LTSpeechTranslationDelegate;
@class NSObject, NSArray;

@interface _LTInstallRequest : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	id<_LTTranslationService> _service;
	/*^block*/id _done;
	BOOL _useCellular;
	NSArray* _locales;
	id<_LTSpeechTranslationDelegate> _delegate;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSArray * locales;                                               //@synthesize locales=_locales - In the implementation block
@property (assign,nonatomic) BOOL useCellular;                                              //@synthesize useCellular=_useCellular - In the implementation block
@property (assign,nonatomic,__weak) id<_LTSpeechTranslationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id progressHandler;                                              //@synthesize progressHandler=_progressHandler - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)initWithLocales:(id)arg1 useCellular:(BOOL)arg2 delegate:(id)arg3 ;
-(void)setUseCellular:(BOOL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id<_LTSpeechTranslationDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)completionHandler;
-(void)setDelegate:(id<_LTSpeechTranslationDelegate>)arg1 ;
-(void)languageInstallProgressed:(id)arg1 error:(id)arg2 ;
-(NSArray *)locales;
-(void)setProgressHandler:(id)arg1 ;
-(void)_startInstallationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(void)setLocales:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)useCellular;
-(id)progressHandler;
-(id)initWithLocales:(id)arg1 useCellular:(BOOL)arg2 ;
-(id)initWithLocales:(id)arg1 useCellular:(BOOL)arg2 progressHandler:(/*^block*/id)arg3 ;
@end

