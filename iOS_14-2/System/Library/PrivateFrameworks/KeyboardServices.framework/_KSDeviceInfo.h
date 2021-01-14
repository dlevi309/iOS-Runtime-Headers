/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/


@class NSString;

@interface _KSDeviceInfo : NSObject {

	BOOL _needsUpdate;
	NSString* _name;
	NSString* _swVersion;
	NSString* _model;
	NSString* _modelDisplayName;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * swVersion;                     //@synthesize swVersion=_swVersion - In the implementation block
@property (nonatomic,copy) NSString * model;                         //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * modelDisplayName;              //@synthesize modelDisplayName=_modelDisplayName - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                       //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(id)ksDecviceWithiCloudDeviceInfo:(id)arg1 ;
+(id)ksDecviceWithName:(id)arg1 swVersion:(id)arg2 model:(id)arg3 modelDisplayName:(id)arg4 ;
+(id)ksDeviceWithName:(id)arg1 needsUpgrade:(BOOL)arg2 ;
+(id)ksDeviceWithName:(id)arg1 swVersion:(id)arg2 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(NSString *)model;
-(BOOL)needsUpdate;
-(NSString *)name;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)modelDisplayName;
-(void)setName:(NSString *)arg1 ;
-(NSString *)swVersion;
-(void)setModelDisplayName:(NSString *)arg1 ;
-(void)setSwVersion:(NSString *)arg1 ;
@end

