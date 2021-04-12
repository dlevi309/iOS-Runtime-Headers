/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NUResolvedSource, NUSource;

@interface PLEditSource : NSObject {

	NUResolvedSource* _resolvedSource;
	long long _mediaType;

}

@property (nonatomic,readonly) NUResolvedSource * resolvedSource;              //@synthesize resolvedSource=_resolvedSource - In the implementation block
@property (nonatomic,retain,readonly) NUSource * source; 
@property (nonatomic,readonly) long long mediaType;                            //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL isRAWSource; 
-(id)description;
-(NUSource *)source;
-(void)setIdentifier:(id)arg1 ;
-(long long)mediaType;
-(id)initWithResolvedSource:(id)arg1 mediaType:(long long)arg2 ;
-(BOOL)isRAWSource;
-(NUResolvedSource *)resolvedSource;
@end

