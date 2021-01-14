/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@class _BPSAbstractZip, NSString;

@interface _BPSAbstractZipSide : NSObject <BPSSubscriber> {

	_BPSAbstractZip* _zip;
	long long _index;

}

@property (nonatomic,retain) _BPSAbstractZip * zip;                 //@synthesize zip=_zip - In the implementation block
@property (assign,nonatomic) long long index;                       //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_BPSAbstractZip *)zip;
-(long long)index;
-(long long)receiveInput:(id)arg1 ;
-(void)receiveCompletion:(id)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(void)setZip:(_BPSAbstractZip *)arg1 ;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithIndex:(long long)arg1 zip:(id)arg2 ;
@end

