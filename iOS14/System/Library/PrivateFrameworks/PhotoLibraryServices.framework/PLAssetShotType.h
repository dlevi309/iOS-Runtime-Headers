/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray, NSString;

@interface PLAssetShotType : NSObject {

	long long _type;
	long long _captureFlags;
	long long _procFlags;
	NSArray* _devices;
	NSString* _name;

}

@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long captureFlags;              //@synthesize captureFlags=_captureFlags - In the implementation block
@property (assign,nonatomic) long long procFlags;                 //@synthesize procFlags=_procFlags - In the implementation block
@property (nonatomic,retain) NSArray * devices;                   //@synthesize devices=_devices - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
+(id)allShotTypes;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setCaptureFlags:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(long long)procFlags;
-(long long)type;
-(long long)captureFlags;
-(void)setName:(NSString *)arg1 ;
-(id)initWithType:(long long)arg1 captureFlags:(long long)arg2 procFlags:(long long)arg3 devices:(id)arg4 name:(id)arg5 ;
-(void)setProcFlags:(long long)arg1 ;
@end

