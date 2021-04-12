/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)setFingerprint:(NSString *)arg1 ;
-(NSString *)fingerprint;
-(void)setSharedStreamsType:(unsigned)arg1 ;
-(unsigned)sharedStreamsType;
@end

