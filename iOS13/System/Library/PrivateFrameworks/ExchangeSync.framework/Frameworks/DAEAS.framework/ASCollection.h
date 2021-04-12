/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSArray, ASFolderItemsSyncResponse;

@interface ASCollection : ASItem {

	long long _dataclass;
	NSString* _syncKey;
	NSString* _collectionId;
	NSNumber* _status;
	NSNumber* _moreAvailable;
	NSArray* _changedItems;
	NSArray* _responseItems;
	ASFolderItemsSyncResponse* _parentResponse;
	int _sniffableType;
	BOOL _checkedShouldSniffInvites;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)description;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)collectionId;
-(void)setCollectionId:(id)arg1 ;
-(id)moreAvailable;
-(long long)dataclass;
-(id)syncKey;
-(void)setMoreAvailable:(id)arg1 ;
-(void)setSyncKey:(id)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)responseItems;
-(void)setResponseItems:(id)arg1 ;
-(void)setDataclassString:(id)arg1 ;
-(void)setChangedItems:(id)arg1 ;
-(void)setParentResponse:(id)arg1 ;
-(id)changedItems;
-(int)sniffableTypeForAccount:(id)arg1 ;
@end

