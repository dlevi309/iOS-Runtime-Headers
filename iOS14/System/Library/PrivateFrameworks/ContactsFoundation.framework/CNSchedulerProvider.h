/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNSchedulerProvider.h>

@protocol CNSchedulerProvider <NSObject>
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler; 
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler; 
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler; 
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler; 
@required
-(id<CNScheduler>)mainThreadScheduler;
-(id)newReaderWriterSchedulerWithName:(id)arg1;
-(id<CNScheduler>)backgroundScheduler;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1;
-(id)newSerialSchedulerWithName:(id)arg1;
-(id<CNScheduler>)inlineScheduler;
-(id<CNScheduler>)immediateScheduler;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;

@end


@protocol CNScheduler;
@class NSString;

@interface CNSchedulerProvider : NSObject <CNSchedulerProvider> {

	id<CNScheduler> _backgroundScheduler;
	id<CNScheduler> _mainThreadScheduler;
	id<CNScheduler> _inlineScheduler;
	id<CNScheduler> _immediateScheduler;
	/*^block*/id _serialSchedulerProvider;
	/*^block*/id _synchronousSerialSchedulerProvider;
	/*^block*/id _readerWriterSchedulerProvider;

}

@property (nonatomic,copy,readonly) id serialSchedulerProvider;                         //@synthesize serialSchedulerProvider=_serialSchedulerProvider - In the implementation block
@property (nonatomic,copy,readonly) id synchronousSerialSchedulerProvider;              //@synthesize synchronousSerialSchedulerProvider=_synchronousSerialSchedulerProvider - In the implementation block
@property (nonatomic,copy,readonly) id readerWriterSchedulerProvider;                   //@synthesize readerWriterSchedulerProvider=_readerWriterSchedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler;                     //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler;                     //@synthesize mainThreadScheduler=_mainThreadScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler;                         //@synthesize inlineScheduler=_inlineScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler;                      //@synthesize immediateScheduler=_immediateScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProvider;
+(id)makeDefaultProvider;
+(id)providerWithBackgroundConcurrencyLimit:(long long)arg1 ;
-(id<CNScheduler>)mainThreadScheduler;
-(id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(/*^block*/id)arg4 synchronousSerialSchedulerProvider:(/*^block*/id)arg5 readerWriterSchedulerProvider:(/*^block*/id)arg6 ;
-(id)serialSchedulerProvider;
-(id)newReaderWriterSchedulerWithName:(id)arg1 ;
-(id<CNScheduler>)backgroundScheduler;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1 ;
-(id)newSerialSchedulerWithName:(id)arg1 ;
-(id)synchronousSerialSchedulerProvider;
-(id<CNScheduler>)inlineScheduler;
-(id<CNScheduler>)immediateScheduler;
-(id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 inlineScheduler:(id)arg3 immediateScheduler:(id)arg4 serialSchedulerProvider:(/*^block*/id)arg5 synchronousSerialSchedulerProvider:(/*^block*/id)arg6 readerWriterSchedulerProvider:(/*^block*/id)arg7 ;
-(id)readerWriterSchedulerProvider;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1 ;
@end

