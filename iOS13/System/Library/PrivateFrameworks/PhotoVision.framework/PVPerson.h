/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSString;

@interface PVPerson : PVObject {

	BOOL _inPersonNamingModel;
	BOOL _verified;
	NSString* _name;
	NSString* _uri;
	long long _faceCount;
	long long _manualOrder;
	long long _type;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * uri;                          //@synthesize uri=_uri - In the implementation block
@property (assign,nonatomic) long long faceCount;                   //@synthesize faceCount=_faceCount - In the implementation block
@property (assign,nonatomic) BOOL inPersonNamingModel;              //@synthesize inPersonNamingModel=_inPersonNamingModel - In the implementation block
@property (assign,nonatomic) BOOL verified;                         //@synthesize verified=_verified - In the implementation block
@property (assign,nonatomic) long long manualOrder;                 //@synthesize manualOrder=_manualOrder - In the implementation block
@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)uri;
-(long long)faceCount;
-(void)setManualOrder:(long long)arg1 ;
-(void)setUri:(NSString *)arg1 ;
-(long long)manualOrder;
-(void)setFaceCount:(long long)arg1 ;
-(void)setInPersonNamingModel:(BOOL)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(BOOL)verified;
-(void)_setPropertiesFrom:(id)arg1 ;
-(BOOL)inPersonNamingModel;
@end

