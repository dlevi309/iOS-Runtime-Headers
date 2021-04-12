/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CVMLFaceprint_LegacySupportDoNotChange : NSObject <NSSecureCoding> {

	unsigned _platform;
	unsigned _profile;
	NSData* _faceprint;
	NSString* _key;
	NSString* _faceprintInputPath;

}

@property (retain) NSData * faceprint;                       //@synthesize faceprint=_faceprint - In the implementation block
@property (copy) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (assign) unsigned platform;                        //@synthesize platform=_platform - In the implementation block
@property (assign) unsigned profile;                         //@synthesize profile=_profile - In the implementation block
@property (copy) NSString * faceprintInputPath;              //@synthesize faceprintInputPath=_faceprintInputPath - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProfile:(unsigned)arg1 ;
-(unsigned)platform;
-(void)setPlatform:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)faceprintInputPath;
-(void)setFaceprintInputPath:(NSString *)arg1 ;
-(unsigned)profile;
-(void)setFaceprint:(NSData *)arg1 ;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSData *)faceprint;
@end

