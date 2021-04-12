/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class SSCoreMLInterface, PRSDirectivesManager, NSString;

@interface PRSModelContext : NSObject {

	unsigned long long _type;
	SSCoreMLInterface* _model;
	PRSDirectivesManager* _directivesManager;
	NSString* _version;

}

@property (assign,nonatomic) unsigned long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SSCoreMLInterface * model;                             //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) PRSDirectivesManager * directivesManager;              //@synthesize directivesManager=_directivesManager - In the implementation block
@property (nonatomic,retain) NSString * version;                                    //@synthesize version=_version - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(SSCoreMLInterface *)model;
-(void)setModel:(SSCoreMLInterface *)arg1 ;
-(void)setDirectivesManager:(PRSDirectivesManager *)arg1 ;
-(id)initWithModel:(id)arg1 directivesManager:(id)arg2 type:(unsigned long long)arg3 ;
-(PRSDirectivesManager *)directivesManager;
@end

