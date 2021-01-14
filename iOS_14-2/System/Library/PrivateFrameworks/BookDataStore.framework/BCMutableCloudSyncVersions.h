/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)dataType;
-(void)setLocalVersion:(long long)arg1 ;
-(void)setDataType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSPersistentHistoryToken *)historyToken;
-(id)initWithCoder:(id)arg1 ;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(long long)syncVersion;
-(void)setSyncVersion:(long long)arg1 ;
-(id)initWithCloudSyncVersions:(id)arg1 ;
-(long long)cloudVersion;
-(void)setCloudVersion:(long long)arg1 ;
-(long long)localVersion;
-(long long)historyTokenOffset;
-(void)setHistoryTokenOffset:(long long)arg1 ;
@end

