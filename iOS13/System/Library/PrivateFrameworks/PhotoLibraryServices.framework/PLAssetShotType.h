/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(long long)procFlags;
-(long long)captureFlags;
-(id)initWithType:(long long)arg1 captureFlags:(long long)arg2 procFlags:(long long)arg3 devices:(id)arg4 name:(id)arg5 ;
-(void)setCaptureFlags:(long long)arg1 ;
-(void)setProcFlags:(long long)arg1 ;
@end

