/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSParsecABGroupStore.h>

@protocol WBSParsecABGroupStoreClient;
@class NSNumber, NSDate, NSString;

@interface WBSParsecABGroupIdentifierUserDefaultsStore : NSObject <WBSParsecABGroupStore> {

	id<WBSParsecABGroupStoreClient> _client;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSParsecABGroupStoreClient> client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSNumber * groupIdentifier; 
@property (nonatomic,retain) NSDate * generationDate; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSNumber *)groupIdentifier;
-(void)setGroupIdentifier:(NSNumber *)arg1 ;
-(id<WBSParsecABGroupStoreClient>)client;
-(void)setClient:(id<WBSParsecABGroupStoreClient>)arg1 ;
-(NSDate *)generationDate;
-(void)setGenerationDate:(NSDate *)arg1 ;
@end

