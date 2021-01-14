/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
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
-(void)setMaxSize:(int)arg1 ;
-(void)setFolderID:(NSString *)arg1 ;
-(NSString *)folderID;
-(NSString *)longID;
-(id)description;
-(void)setServerID:(NSString *)arg1 ;
-(int)maxSize;
-(void)setLongID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setBodyFormat:(int)arg1 ;
-(id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3 ;
-(NSString *)serverID;
-(id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5 ;
-(int)bodyFormat;
-(BOOL)isEqual:(id)arg1 ;
@end

