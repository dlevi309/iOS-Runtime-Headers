/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICLibraryAuthServiceClientTokenResult, NSError;

@interface ICLibraryAuthServiceClientTokenStatus : NSObject <NSSecureCoding> {

	BOOL _shouldExcludeFromBackgroundRefresh;
	ICLibraryAuthServiceClientTokenResult* _tokenResult;
	NSError* _lastError;
	double _lastUpdateAttemptTime;

}

@property (nonatomic,copy) ICLibraryAuthServiceClientTokenResult * tokenResult;              //@synthesize tokenResult=_tokenResult - In the implementation block
@property (nonatomic,copy) NSError * lastError;                                              //@synthesize lastError=_lastError - In the implementation block
@property (assign,nonatomic) double lastUpdateAttemptTime;                                   //@synthesize lastUpdateAttemptTime=_lastUpdateAttemptTime - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeFromBackgroundRefresh;                        //@synthesize shouldExcludeFromBackgroundRefresh=_shouldExcludeFromBackgroundRefresh - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSError *)lastError;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTokenResult:(ICLibraryAuthServiceClientTokenResult *)arg1 ;
-(double)lastUpdateAttemptTime;
-(void)setLastUpdateAttemptTime:(double)arg1 ;
-(BOOL)shouldExcludeFromBackgroundRefresh;
-(void)setShouldExcludeFromBackgroundRefresh:(BOOL)arg1 ;
-(ICLibraryAuthServiceClientTokenResult *)tokenResult;
-(id)initWithCoder:(id)arg1 ;
-(void)setLastError:(NSError *)arg1 ;
@end

