/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSRemoteInternal.h>

@protocol PDSKVStore;
@interface PDSInternalDaemonListener : NSObject <PDSRemoteInternal> {

	id<PDSKVStore> _kvStore;

}

@property (nonatomic,retain) id<PDSKVStore> kvStore;              //@synthesize kvStore=_kvStore - In the implementation block
-(void)setKvStore:(id<PDSKVStore>)arg1 ;
-(id<PDSKVStore>)kvStore;
-(void)setStringValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setNumberValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setDataValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)stringRepresentationForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)kvStateDumpWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithKVStore:(id)arg1 ;
@end

