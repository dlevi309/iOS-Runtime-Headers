/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@class NSData, NSMutableArray, NSNumber, WuluRecord;

@interface WuluReaderContext : NSObject {

	NSData* _file15;
	NSData* _file17;
	NSMutableArray* _file18;
	NSMutableArray* _file1E;
	NSMutableArray* _file1A;
	NSNumber* _balance;
	WuluRecord* _localRecord;

}

@property (nonatomic,retain) NSData * file15;                       //@synthesize file15=_file15 - In the implementation block
@property (nonatomic,retain) NSData * file17;                       //@synthesize file17=_file17 - In the implementation block
@property (nonatomic,retain) NSMutableArray * file18;               //@synthesize file18=_file18 - In the implementation block
@property (nonatomic,retain) NSMutableArray * file1E;               //@synthesize file1E=_file1E - In the implementation block
@property (nonatomic,retain) NSMutableArray * file1A;               //@synthesize file1A=_file1A - In the implementation block
@property (nonatomic,retain) NSNumber * balance;                    //@synthesize balance=_balance - In the implementation block
@property (nonatomic,retain) WuluRecord * localRecord;              //@synthesize localRecord=_localRecord - In the implementation block
+(id)readAllFiles:(id)arg1 debug:(BOOL)arg2 error:(id*)arg3 ;
-(NSNumber *)balance;
-(void)setBalance:(NSNumber *)arg1 ;
-(NSData *)file15;
-(NSData *)file17;
-(NSMutableArray *)file1A;
-(NSMutableArray *)file1E;
-(NSMutableArray *)file18;
-(WuluRecord *)localRecord;
-(id)readAll:(id)arg1 debug:(BOOL)arg2 error:(id*)arg3 ;
-(id)readBalance:(id)arg1 error:(id*)arg2 ;
-(id)readBinary:(id)arg1 sfi:(unsigned char)arg2 error:(id*)arg3 ;
-(void)setFile15:(NSData *)arg1 ;
-(void)setFile17:(NSData *)arg1 ;
-(void)setFile18:(NSMutableArray *)arg1 ;
-(void)setFile1E:(NSMutableArray *)arg1 ;
-(id)readRecord:(id)arg1 sfi:(unsigned char)arg2 index:(unsigned char)arg3 error:(id*)arg4 ;
-(id)readExtendedRecord:(id)arg1 sfi:(unsigned char)arg2 index:(unsigned char)arg3 error:(id*)arg4 ;
-(void)setFile1A:(NSMutableArray *)arg1 ;
-(void)readAdditionalFile:(id)arg1 cityCode:(id)arg2 ;
-(void)dumpAllFiles;
-(void)setLocalRecord:(WuluRecord *)arg1 ;
@end

