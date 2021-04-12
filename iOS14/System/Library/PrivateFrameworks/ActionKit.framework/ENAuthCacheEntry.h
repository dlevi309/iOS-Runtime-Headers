/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class EDAMAuthenticationResult, NSDate;

@interface ENAuthCacheEntry : NSObject {

	EDAMAuthenticationResult* _authResult;
	NSDate* _cachedDate;

}

@property (nonatomic,retain) EDAMAuthenticationResult * authResult;              //@synthesize authResult=_authResult - In the implementation block
@property (nonatomic,retain) NSDate * cachedDate;                                //@synthesize cachedDate=_cachedDate - In the implementation block
+(id)entryWithResult:(id)arg1 ;
-(BOOL)isValid;
-(EDAMAuthenticationResult *)authResult;
-(void)setAuthResult:(EDAMAuthenticationResult *)arg1 ;
-(NSDate *)cachedDate;
-(void)setCachedDate:(NSDate *)arg1 ;
@end

