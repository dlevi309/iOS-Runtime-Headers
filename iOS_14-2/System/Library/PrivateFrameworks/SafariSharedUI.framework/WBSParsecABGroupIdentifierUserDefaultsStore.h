/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSParsecABGroupStore.h>

@protocol WBSParsecABGroupStoreClient;
@class NSNumber, NSDate, NSString;

@interface WBSParsecABGroupIdentifierUserDefaultsStore : NSObject <WBSParsecABGroupStore> {

	id<WBSParsecABGroupStoreClient> _client;

}

@property (assign,nonatomic,__weak) id<WBSParsecABGroupStoreClient> client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSNumber * groupIdentifier; 
@property (nonatomic,retain) NSDate * generationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGroupIdentifier:(NSNumber *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<WBSParsecABGroupStoreClient>)client;
-(NSNumber *)groupIdentifier;
-(void)setClient:(id<WBSParsecABGroupStoreClient>)arg1 ;
-(id)init;
-(NSDate *)generationDate;
-(void)setGenerationDate:(NSDate *)arg1 ;
-(void)dealloc;
@end

