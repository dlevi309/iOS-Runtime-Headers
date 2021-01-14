/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString, NSDictionary, MFIMAPResponseConsumer, NSArray;

@interface MFIMAPResponse : NSObject <EFPubliclyDescribable> {

	unsigned _responseType : 8;
	NSString* _tag;
	NSDictionary* _keyValuePairs;
	IMAPResponseData _data;
	MFIMAPResponseConsumer* _responseConsumer;

}

@property (nonatomic,retain) MFIMAPResponseConsumer * responseConsumer;              //@synthesize responseConsumer=_responseConsumer - In the implementation block
@property (nonatomic,copy) NSArray * privateNamespaces; 
@property (nonatomic,copy) NSArray * publicNamespaces; 
@property (nonatomic,copy) NSArray * sharedNamespaces; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNumber:(unsigned long long)arg1 ;
-(id)parameters;
-(id)initWithString:(id)arg1 ;
-(id)serverInfo;
-(id)fetchResults;
-(unsigned long long)number;
-(id)capabilities;
-(void)setCapabilities:(id)arg1 ;
-(void)setTag:(id)arg1 ;
-(NSString *)ef_publicDescription;
-(id)uids;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)flags;
-(id)userData;
-(id)tag;
-(void)setServerInfo:(id)arg1 ;
-(id)responseInfo;
-(id)quotas;
-(id)separator;
-(NSString *)description;
-(id)keyValuePairs;
-(void)setFlags:(id)arg1 ;
-(id)initWithResponseType:(int)arg1 ;
-(void)setResponseType:(int)arg1 ;
-(int)responseType;
-(void)setSearchResults:(id)arg1 ;
-(id)searchResults;
-(id)mailboxName;
-(id)responseName;
-(void)setFetchResults:(id)arg1 ;
-(id)extraAttributes;
-(void)dealloc;
-(int)responseCode;
-(BOOL)isResponseWithCode:(int)arg1 ;
-(BOOL)isAlertResponse;
-(id)userString;
-(id)statusEntries;
-(MFIMAPResponseConsumer *)responseConsumer;
-(void)setResponseConsumer:(MFIMAPResponseConsumer *)arg1 ;
-(BOOL)isUntagged;
-(id)initWithConnection:(id)arg1 responseConsumer:(id)arg2 ;
-(NSArray *)privateNamespaces;
-(unsigned long long)mailboxAttributes;
-(void)setUidFlagsChange:(int)arg1 ;
-(void)setUids:(id)arg1 ;
-(void)setFlagsFetchResult:(id)arg1 ;
-(id)fetchResultWithType:(int)arg1 ;
-(id)_descriptionWithFullData:(BOOL)arg1 ;
-(id)quotaRootNames;
-(id)quotaRootName;
-(int)uidFlagsChange;
-(id)flagsFetchResult;
-(NSArray *)publicNamespaces;
-(NSArray *)sharedNamespaces;
-(void)setUserData:(id)arg1 responseCode:(int)arg2 responseInfo:(id)arg3 ;
-(void)setMailboxName:(id)arg1 statusEntries:(id)arg2 ;
-(void)setMailboxAttributes:(unsigned long long)arg1 separator:(id)arg2 mailboxName:(id)arg3 extraAttributes:(id)arg4 ;
-(void)setMailboxName:(id)arg1 quotaRootNames:(id)arg2 ;
-(void)setQuotaRootName:(id)arg1 quotas:(id)arg2 ;
-(void)setPrivateNamespaces:(NSArray *)arg1 ;
-(void)setPublicNamespaces:(NSArray *)arg1 ;
-(void)setSharedNamespaces:(NSArray *)arg1 ;
-(void)setResponseName:(id)arg1 parameters:(id)arg2 ;
@end

