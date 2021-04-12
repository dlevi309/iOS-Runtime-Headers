/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLPhotoLibraryPathManager;

@interface PLMigrationPostProcessingToken : NSObject {

	BOOL _tokenIsKnownToBeMissing;
	PLPhotoLibraryPathManager* _pathManager;

}
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)isTokenPresent;
-(BOOL)isTokenValid;
-(void)writeToken;
-(id)_tokenFullPath;
-(void)incrementToken;
-(void)removeToken;
-(void)invalidateCachedTokenState;
-(void)_writeTokenValue:(int)arg1 ;
-(int)_tokenValue;
@end

