/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSString;

@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource {

	unsigned _sharedStreamsType;
	NSString* _fingerprint;

}

@property (assign,nonatomic) unsigned sharedStreamsType;              //@synthesize sharedStreamsType=_sharedStreamsType - In the implementation block
@property (nonatomic,retain) NSString * fingerprint;                  //@synthesize fingerprint=_fingerprint - In the implementation block
-(NSString *)fingerprint;
-(void)setFingerprint:(NSString *)arg1 ;
-(void)setSharedStreamsType:(unsigned)arg1 ;
-(unsigned)sharedStreamsType;
-(id)description;
@end

