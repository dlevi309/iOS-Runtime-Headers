/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/MessagesComplication.bundle/MessagesComplication
*/

#import <libobjc.A.dylib/CKMessagesComplicationDataProviderSubscriber.h>

@protocol CKMessagesComplicationDataProviderSubscriber;
@class NSString;

@interface CKMessagesComplicationSubscriberProxy : NSObject <CKMessagesComplicationDataProviderSubscriber> {

	id<CKMessagesComplicationDataProviderSubscriber> _subscriber;

}

@property (assign,nonatomic,__weak) id<CKMessagesComplicationDataProviderSubscriber> subscriber;              //@synthesize subscriber=_subscriber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CKMessagesComplicationDataProviderSubscriber>)subscriber;
-(void)setSubscriber:(id<CKMessagesComplicationDataProviderSubscriber>)arg1 ;
-(id)initWithSubscriber:(id)arg1 ;
-(void)unreadCountDidChange:(unsigned long long)arg1 ;
@end

