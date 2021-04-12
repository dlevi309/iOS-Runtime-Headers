/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@class NSString;

@interface SNFileServerInfo : NSObject {

	NSString* _identifier;
	NSString* _idsDeviceID;
	NSString* _model;
	NSString* _name;

}

@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * idsDeviceID;              //@synthesize idsDeviceID=_idsDeviceID - In the implementation block
@property (nonatomic,retain) NSString * model;                    //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
-(NSString *)model;
-(void)setIdsDeviceID:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)idsDeviceID;
-(void)setModel:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 idsDeviceID:(id)arg2 model:(id)arg3 name:(id)arg4 ;
@end

