/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSString, NSArray;

@interface ICLaunchConfiguration : NSObject {

	BOOL _resetCloud;
	BOOL _resetContainer;
	BOOL _resetState;
	NSString* _cloudAccountContentPath;
	NSString* _container;
	unsigned long long _environment;
	NSString* _localAccountArchiveName;

}

@property (nonatomic,copy) NSString * cloudAccountContentPath;              //@synthesize cloudAccountContentPath=_cloudAccountContentPath - In the implementation block
@property (nonatomic,copy) NSString * container;                            //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned long long environment;                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * localAccountArchiveName;              //@synthesize localAccountArchiveName=_localAccountArchiveName - In the implementation block
@property (assign,nonatomic) BOOL resetCloud;                               //@synthesize resetCloud=_resetCloud - In the implementation block
@property (assign,nonatomic) BOOL resetContainer;                           //@synthesize resetContainer=_resetContainer - In the implementation block
@property (assign,nonatomic) BOOL resetState;                               //@synthesize resetState=_resetState - In the implementation block
@property (nonatomic,readonly) NSArray * launchArguments; 
+(id)current;
-(id)initWithDictionary:(id)arg1 ;
-(void)setContainer:(NSString *)arg1 ;
-(BOOL)resetContainer;
-(BOOL)resetState;
-(void)setEnvironment:(unsigned long long)arg1 ;
-(unsigned long long)environment;
-(void)setResetState:(BOOL)arg1 ;
-(NSString *)container;
-(BOOL)resetCloud;
-(id)initWithEnvironment:(unsigned long long)arg1 container:(id)arg2 resetContainer:(BOOL)arg3 resetCloud:(BOOL)arg4 resetState:(BOOL)arg5 localAccountArchiveName:(id)arg6 cloudAccountContentPath:(id)arg7 ;
-(NSString *)localAccountArchiveName;
-(NSString *)cloudAccountContentPath;
-(id)initWithEnvironment:(unsigned long long)arg1 container:(id)arg2 ;
-(NSArray *)launchArguments;
-(void)setCloudAccountContentPath:(NSString *)arg1 ;
-(void)setLocalAccountArchiveName:(NSString *)arg1 ;
-(void)setResetCloud:(BOOL)arg1 ;
-(void)setResetContainer:(BOOL)arg1 ;
@end

