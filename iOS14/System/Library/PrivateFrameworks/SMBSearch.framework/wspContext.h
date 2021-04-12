/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


#import <SMBSearch/SMBSearch-Structs.h>
@class NSString, NSMutableArray, NSDate, pidMapper;

@interface wspContext : NSObject {

	BOOL _supports64BitOffsets;
	int _queryType;
	unsigned _serverVersion;
	unsigned _trueSequential;
	unsigned _workID;
	unsigned _cursor;
	unsigned _whereID;
	unsigned _seekBookmarkOffset;
	unsigned _seekSkip;
	unsigned _rowsSoFar;
	NSString* _serverName;
	NSString* _serverAddress;
	NSString* _userName;
	NSString* _clientMachineName;
	NSString* _searchPath;
	NSString* _contentPattern;
	NSMutableArray* _fnamePatterns;
	NSMutableArray* _fextPatterns;
	NSDate* _modDate;
	pidMapper* _pidMap;
	timespec _modDateSpec;

}

@property (retain) NSString * serverName;                       //@synthesize serverName=_serverName - In the implementation block
@property (retain) NSString * serverAddress;                    //@synthesize serverAddress=_serverAddress - In the implementation block
@property (retain) NSString * userName;                         //@synthesize userName=_userName - In the implementation block
@property (retain) NSString * clientMachineName;                //@synthesize clientMachineName=_clientMachineName - In the implementation block
@property (retain) NSString * searchPath;                       //@synthesize searchPath=_searchPath - In the implementation block
@property (assign) int queryType;                               //@synthesize queryType=_queryType - In the implementation block
@property (assign) timespec modDateSpec;                        //@synthesize modDateSpec=_modDateSpec - In the implementation block
@property (retain) NSString * contentPattern;                   //@synthesize contentPattern=_contentPattern - In the implementation block
@property (retain) NSMutableArray * fnamePatterns;              //@synthesize fnamePatterns=_fnamePatterns - In the implementation block
@property (retain) NSMutableArray * fextPatterns;               //@synthesize fextPatterns=_fextPatterns - In the implementation block
@property (retain) NSDate * modDate;                            //@synthesize modDate=_modDate - In the implementation block
@property (retain) pidMapper * pidMap;                          //@synthesize pidMap=_pidMap - In the implementation block
@property (readonly) unsigned serverVersion;                    //@synthesize serverVersion=_serverVersion - In the implementation block
@property (readonly) BOOL supports64BitOffsets;                 //@synthesize supports64BitOffsets=_supports64BitOffsets - In the implementation block
@property (assign) unsigned trueSequential;                     //@synthesize trueSequential=_trueSequential - In the implementation block
@property (assign) unsigned workID;                             //@synthesize workID=_workID - In the implementation block
@property (assign) unsigned cursor;                             //@synthesize cursor=_cursor - In the implementation block
@property (assign) unsigned whereID;                            //@synthesize whereID=_whereID - In the implementation block
@property (assign) unsigned seekBookmarkOffset;                 //@synthesize seekBookmarkOffset=_seekBookmarkOffset - In the implementation block
@property (assign) unsigned seekSkip;                           //@synthesize seekSkip=_seekSkip - In the implementation block
@property (assign) unsigned rowsSoFar;                          //@synthesize rowsSoFar=_rowsSoFar - In the implementation block
-(id)init;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)serverAddress;
-(void)setServerAddress:(NSString *)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(pidMapper *)pidMap;
-(unsigned)workID;
-(unsigned)cursor;
-(void)setQueryType:(int)arg1 ;
-(void)setServerVersion:(unsigned)arg1 ;
-(unsigned)serverVersion;
-(unsigned)whereID;
-(NSDate *)modDate;
-(int)queryType;
-(void)setCursor:(unsigned)arg1 ;
-(unsigned)seekBookmarkOffset;
-(unsigned)seekSkip;
-(unsigned)rowsSoFar;
-(void)setRowsSoFar:(unsigned)arg1 ;
-(void)setSeekBookmarkOffset:(unsigned)arg1 ;
-(void)setSeekSkip:(unsigned)arg1 ;
-(BOOL)supports64BitOffsets;
-(NSString *)clientMachineName;
-(unsigned)trueSequential;
-(void)setContentSearch:(id)arg1 ;
-(void)setFilenameSearch:(id)arg1 ;
-(void)setFileExtSearch:(id)arg1 ;
-(void)setModDateSearch:(id)arg1 ;
-(BOOL)serverSupports64BitOffsets;
-(void)logContents;
-(void)setClientMachineName:(NSString *)arg1 ;
-(NSString *)searchPath;
-(void)setSearchPath:(NSString *)arg1 ;
-(timespec)modDateSpec;
-(void)setModDateSpec:(timespec)arg1 ;
-(NSString *)contentPattern;
-(void)setContentPattern:(NSString *)arg1 ;
-(NSMutableArray *)fnamePatterns;
-(void)setFnamePatterns:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fextPatterns;
-(void)setFextPatterns:(NSMutableArray *)arg1 ;
-(void)setModDate:(NSDate *)arg1 ;
-(void)setPidMap:(pidMapper *)arg1 ;
-(void)setTrueSequential:(unsigned)arg1 ;
-(void)setWorkID:(unsigned)arg1 ;
-(void)setWhereID:(unsigned)arg1 ;
@end

