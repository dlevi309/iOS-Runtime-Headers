/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


@class NSString;

@interface PGPictureInPictureApplication : NSObject {

	int _processIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) int processIdentifier;                    //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1 ;
-(int)processIdentifier;
-(id)init;
-(id)initWithProcessIdentifier:(int)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqualToPGPictureInPictureApplication:(id)arg1 ;
@end

