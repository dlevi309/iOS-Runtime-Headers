/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCVersion.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSError, NSString;

@interface BRCDesiredVersion : BRCVersion <PQLValuable> {

	SCD_Union_BR23 _flags;
	NSError* _downloadError;
	NSString* _serverName;

}

@property (nonatomic,retain) NSError * downloadError;                      //@synthesize downloadError=_downloadError - In the implementation block
@property (nonatomic,readonly) NSString * serverName;                      //@synthesize serverName=_serverName - In the implementation block
@property (assign,nonatomic) unsigned options; 
@property (nonatomic,readonly) BOOL isFault; 
@property (nonatomic,readonly) BOOL wantsContent; 
@property (nonatomic,readonly) BOOL wantsContentForThumbnail; 
@property (nonatomic,readonly) BOOL wantsThumbnail; 
@property (nonatomic,readonly) BOOL userInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newFromSqliteValue:(sqlite3_valueRef)arg1 ;
+(id)newFromSqliteStatement:(sqlite3_stmtRef)arg1 atIndex:(int)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)options;
-(void)setOptions:(unsigned)arg1 ;
-(NSString *)serverName;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFault;
-(void)setDownloadError:(NSError *)arg1 ;
-(NSError *)downloadError;
-(BOOL)userInitiated;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)wantsContent;
-(BOOL)wantsContentForThumbnail;
-(BOOL)wantsThumbnail;
-(id)initWithServerVersion:(id)arg1 serverName:(id)arg2 ;
-(void)markLiveAsFault;
-(id)initWithDesiredVersion:(id)arg1 ;
-(BOOL)isStillValidForEtag:(id)arg1 ;
@end

