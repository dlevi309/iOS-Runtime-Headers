/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDirectivesManager:(PRSDirectivesManager *)arg1 ;
-(SSCoreMLInterface *)model;
-(void)setType:(unsigned long long)arg1 ;
-(PRSDirectivesManager *)directivesManager;
-(id)initWithModel:(id)arg1 directivesManager:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setModel:(SSCoreMLInterface *)arg1 ;
-(unsigned long long)type;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
@end

