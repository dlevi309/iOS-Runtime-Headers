/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)mediaType;
-(id)initWithResolvedSource:(id)arg1 mediaType:(long long)arg2 ;
-(BOOL)isRAWSource;
-(NUResolvedSource *)resolvedSource;
-(id)description;
-(void)setIdentifier:(id)arg1 ;
-(NUSource *)source;
@end

