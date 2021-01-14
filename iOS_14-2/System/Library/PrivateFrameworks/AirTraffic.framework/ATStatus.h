/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATStatus : NSObject <NSSecureCoding> {

	BOOL _wirelessSync;
	BOOL _automaticSync;
	unsigned _syncStage;
	unsigned _syncType;
	float _progress;
	NSString* _libraryID;
	NSString* _dataClass;
	NSString* _localizedDescription;
	unsigned long long _completedAssetCount;
	unsigned long long _totalAssetCount;
	unsigned long long _totalItemCount;

}

@property (nonatomic,copy) NSString * libraryID;                                     //@synthesize libraryID=_libraryID - In the implementation block
@property (nonatomic,copy) NSString * dataClass;                                     //@synthesize dataClass=_dataClass - In the implementation block
@property (assign,nonatomic) unsigned syncStage;                                     //@synthesize syncStage=_syncStage - In the implementation block
@property (assign,nonatomic) unsigned syncType;                                      //@synthesize syncType=_syncType - In the implementation block
@property (assign,nonatomic) float progress;                                         //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                          //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,nonatomic) unsigned long long completedAssetCount;                 //@synthesize completedAssetCount=_completedAssetCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalAssetCount;                     //@synthesize totalAssetCount=_totalAssetCount - In the implementation block
@property (assign,nonatomic) unsigned long long totalItemCount;                      //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign,getter=isWirelessSync,nonatomic) BOOL wirelessSync;                //@synthesize wirelessSync=_wirelessSync - In the implementation block
@property (assign,getter=isAutomaticSync,nonatomic) BOOL automaticSync;              //@synthesize automaticSync=_automaticSync - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)totalItemCount;
-(float)progress;
-(NSString *)libraryID;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)syncType;
-(id)description;
-(NSString *)localizedDescription;
-(void)setDataClass:(NSString *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)syncStage;
-(id)initWithLibraryID:(id)arg1 dataClass:(id)arg2 ;
-(void)setSyncStage:(unsigned)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(unsigned long long)completedAssetCount;
-(void)setCompletedAssetCount:(unsigned long long)arg1 ;
-(void)setTotalAssetCount:(unsigned long long)arg1 ;
-(void)setTotalItemCount:(unsigned long long)arg1 ;
-(BOOL)isWirelessSync;
-(void)setWirelessSync:(BOOL)arg1 ;
-(BOOL)isAutomaticSync;
-(void)setAutomaticSync:(BOOL)arg1 ;
-(void)setLibraryID:(NSString *)arg1 ;
-(unsigned long long)totalAssetCount;
-(void)setSyncType:(unsigned)arg1 ;
-(NSString *)dataClass;
-(BOOL)isEqual:(id)arg1 ;
@end

