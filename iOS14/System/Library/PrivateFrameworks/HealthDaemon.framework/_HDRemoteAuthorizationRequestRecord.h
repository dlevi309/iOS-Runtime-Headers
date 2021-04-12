/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSError, NSMutableArray;

@interface _HDRemoteAuthorizationRequestRecord : NSObject {

	BOOL _didRecieveShouldPrompt;
	BOOL _shouldPrompt;
	NSString* _bundleID;
	NSString* _hostAppName;
	NSError* _shouldPromptError;
	NSMutableArray* _records;

}

@property (nonatomic,copy,readonly) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL didRecieveShouldPrompt;              //@synthesize didRecieveShouldPrompt=_didRecieveShouldPrompt - In the implementation block
@property (assign,nonatomic) BOOL shouldPrompt;                        //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (nonatomic,copy) NSString * hostAppName;                     //@synthesize hostAppName=_hostAppName - In the implementation block
@property (nonatomic,copy) NSError * shouldPromptError;                //@synthesize shouldPromptError=_shouldPromptError - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                 //@synthesize records=_records - In the implementation block
-(void)setRecords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)records;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)bundleID;
-(void)setHostAppName:(NSString *)arg1 ;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(BOOL)shouldPrompt;
-(NSString *)hostAppName;
-(BOOL)didRecieveShouldPrompt;
-(NSError *)shouldPromptError;
-(void)setDidRecieveShouldPrompt:(BOOL)arg1 ;
-(void)setShouldPromptError:(NSError *)arg1 ;
@end

