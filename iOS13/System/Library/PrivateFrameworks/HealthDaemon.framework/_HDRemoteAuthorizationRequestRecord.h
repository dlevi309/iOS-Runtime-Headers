/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleID;
-(NSMutableArray *)records;
-(id)initWithBundleID:(id)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(BOOL)shouldPrompt;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(void)setHostAppName:(NSString *)arg1 ;
-(NSString *)hostAppName;
-(BOOL)didRecieveShouldPrompt;
-(NSError *)shouldPromptError;
-(void)setDidRecieveShouldPrompt:(BOOL)arg1 ;
-(void)setShouldPromptError:(NSError *)arg1 ;
@end

