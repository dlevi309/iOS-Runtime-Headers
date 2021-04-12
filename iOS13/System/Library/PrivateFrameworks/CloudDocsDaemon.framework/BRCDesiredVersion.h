/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCVersion.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSError, NSString;

@interface BRCDesiredVersion : BRCVersion <PQLValuable> {

	SCD_Union_BR18 _flags;
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFault;
-(unsigned)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(BOOL)userInitiated;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(void)setDownloadError:(NSError *)arg1 ;
-(NSError *)downloadError;
-(NSString *)serverName;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)wantsContent;
-(BOOL)wantsContentForThumbnail;
-(BOOL)wantsThumbnail;
-(id)initWithDesiredVersion:(id)arg1 ;
-(void)markLiveAsFault;
-(id)initWithServerVersion:(id)arg1 serverName:(id)arg2 ;
-(BOOL)isStillValidForEtag:(id)arg1 ;
@end

