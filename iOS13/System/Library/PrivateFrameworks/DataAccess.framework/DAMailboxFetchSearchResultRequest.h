/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject {

	int _bodyFormat;
	int _maxSize;
	NSString* _longID;
	NSString* _folderID;
	NSString* _serverID;

}

@property (nonatomic,copy) NSString * longID;                //@synthesize longID=_longID - In the implementation block
@property (nonatomic,copy) NSString * folderID;              //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * serverID;              //@synthesize serverID=_serverID - In the implementation block
@property (assign,nonatomic) int bodyFormat;                 //@synthesize bodyFormat=_bodyFormat - In the implementation block
@property (assign,nonatomic) int maxSize;                    //@synthesize maxSize=_maxSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setMaxSize:(int)arg1 ;
-(int)maxSize;
-(NSString *)folderID;
-(void)setFolderID:(NSString *)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)longID;
-(int)bodyFormat;
-(id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5 ;
-(void)setBodyFormat:(int)arg1 ;
-(void)setLongID:(NSString *)arg1 ;
-(id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3 ;
@end

