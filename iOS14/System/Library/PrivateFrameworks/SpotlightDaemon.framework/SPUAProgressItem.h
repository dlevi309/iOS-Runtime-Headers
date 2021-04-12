/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@class NSString;

@interface SPUAProgressItem : NSObject {

	unsigned _expectedCount;
	unsigned _completeCount;
	unsigned _errorCount;
	unsigned _deleteCount;
	NSString* _bundleID;
	NSString* _uaID;
	NSString* _relatedID;

}

@property (nonatomic,retain) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * uaID;                     //@synthesize uaID=_uaID - In the implementation block
@property (nonatomic,retain) NSString * relatedID;                //@synthesize relatedID=_relatedID - In the implementation block
@property (assign,nonatomic) unsigned expectedCount;              //@synthesize expectedCount=_expectedCount - In the implementation block
@property (assign,nonatomic) unsigned completeCount;              //@synthesize completeCount=_completeCount - In the implementation block
@property (assign,nonatomic) unsigned errorCount;                 //@synthesize errorCount=_errorCount - In the implementation block
@property (assign,nonatomic) unsigned deleteCount;                //@synthesize deleteCount=_deleteCount - In the implementation block
+(void)initialize;
+(void)queueRelatedDelete:(id)arg1 forBundleID:(id)arg2 ;
-(void)add;
-(void)update:(int)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)uaID;
-(unsigned)deleteCount;
-(void)setDeleteCount:(unsigned)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(unsigned)errorCount;
-(void)setErrorCount:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 uaID:(id)arg2 relatedID:(id)arg3 ;
-(void)setExpectedCount:(unsigned)arg1 ;
-(NSString *)relatedID;
-(unsigned)expectedCount;
-(unsigned)completeCount;
-(void)setCompleteCount:(unsigned)arg1 ;
-(void)setUaID:(NSString *)arg1 ;
-(void)setRelatedID:(NSString *)arg1 ;
@end

