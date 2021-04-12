/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTIDSecretStore.h>

@class NSMutableDictionary, NSString;

@interface MTIDCompositeSecretStore : NSObject <MTIDSecretStore> {

	NSMutableDictionary* _stores;

}

@property (nonatomic,retain) NSMutableDictionary * stores;              //@synthesize stores=_stores - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableDictionary *)stores;
-(id)debugInfo;
-(void)setStores:(NSMutableDictionary *)arg1 ;
-(id)secretForScheme:(id)arg1 options:(id)arg2 ;
-(void)clearLocalData;
-(id)secretStoreForScheme:(id)arg1 ;
@end

