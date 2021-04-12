/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BCCloudSyncVersions.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSPersistentHistoryToken;

@interface BCMutableCloudSyncVersions : NSObject <BCCloudSyncVersions, NSSecureCoding> {

	NSString* _dataType;
	long long _cloudVersion;
	long long _localVersion;
	long long _syncVersion;
	NSPersistentHistoryToken* _historyToken;
	long long _historyTokenOffset;

}

@property (nonatomic,copy) NSString * dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,copy) NSPersistentHistoryToken * historyToken;              //@synthesize historyToken=_historyToken - In the implementation block
@property (assign,nonatomic) long long historyTokenOffset;                       //@synthesize historyTokenOffset=_historyTokenOffset - In the implementation block
@property (assign,nonatomic) long long cloudVersion;                             //@synthesize cloudVersion=_cloudVersion - In the implementation block
@property (assign,nonatomic) long long localVersion;                             //@synthesize localVersion=_localVersion - In the implementation block
@property (assign,nonatomic) long long syncVersion;                              //@synthesize syncVersion=_syncVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)dataType;
-(void)setDataType:(NSString *)arg1 ;
-(void)setLocalVersion:(long long)arg1 ;
-(NSPersistentHistoryToken *)historyToken;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(long long)localVersion;
-(id)initWithCloudSyncVersions:(id)arg1 ;
-(long long)cloudVersion;
-(void)setCloudVersion:(long long)arg1 ;
-(long long)syncVersion;
-(void)setSyncVersion:(long long)arg1 ;
-(long long)historyTokenOffset;
-(void)setHistoryTokenOffset:(long long)arg1 ;
@end

