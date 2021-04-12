/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)newSerialSchedulerWithName:(id)arg1;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;
-(id<CNScheduler>)immediateScheduler;
-(id<CNScheduler>)backgroundScheduler;
-(id<CNScheduler>)inlineScheduler;
-(id)newReaderWriterSchedulerWithName:(id)arg1;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler;                     //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler;                     //@synthesize mainThreadScheduler=_mainThreadScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> inlineScheduler;                         //@synthesize inlineScheduler=_inlineScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> immediateScheduler;                      //@synthesize immediateScheduler=_immediateScheduler - In the implementation block
+(id)defaultProvider;
+(id)providerWithBackgroundConcurrencyLimit:(long long)arg1 ;
+(id)makeDefaultProvider;
-(id<CNScheduler>)mainThreadScheduler;
-(id)newSerialSchedulerWithName:(id)arg1 ;
-(id)newSynchronousSerialSchedulerWithName:(id)arg1 ;
-(id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1 ;
-(id<CNScheduler>)immediateScheduler;
-(id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 inlineScheduler:(id)arg3 immediateScheduler:(id)arg4 serialSchedulerProvider:(/*^block*/id)arg5 synchronousSerialSchedulerProvider:(/*^block*/id)arg6 readerWriterSchedulerProvider:(/*^block*/id)arg7 ;
-(id<CNScheduler>)backgroundScheduler;
-(id<CNScheduler>)inlineScheduler;
-(id)serialSchedulerProvider;
-(id)synchronousSerialSchedulerProvider;
-(id)readerWriterSchedulerProvider;
-(id)newReaderWriterSchedulerWithName:(id)arg1 ;
-(id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(/*^block*/id)arg4 synchronousSerialSchedulerProvider:(/*^block*/id)arg5 readerWriterSchedulerProvider:(/*^block*/id)arg6 ;
@end

