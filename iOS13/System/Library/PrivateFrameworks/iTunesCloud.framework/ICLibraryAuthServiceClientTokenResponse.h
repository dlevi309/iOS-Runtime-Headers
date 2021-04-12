/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICLibraryAuthServiceClientTokenResult;

@interface ICLibraryAuthServiceClientTokenResponse : NSObject <NSCopying> {

	BOOL _success;
	int _resultCode;
	NSString* _serverHostName;
	long long _serverInstance;
	ICLibraryAuthServiceClientTokenResult* _tokenResult;

}

@property (nonatomic,readonly) int resultCode;                                                        //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverHostName;                                        //@synthesize serverHostName=_serverHostName - In the implementation block
@property (nonatomic,readonly) long long serverInstance;                                              //@synthesize serverInstance=_serverInstance - In the implementation block
@property (assign,getter=isSuccess,nonatomic) BOOL success;                                           //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) ICLibraryAuthServiceClientTokenResult * tokenResult;              //@synthesize tokenResult=_tokenResult - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isSuccess;
-(long long)serverInstance;
-(id)initWithResponseDictionary:(id)arg1 ;
-(int)resultCode;
-(id)initWithResultCode:(int)arg1 ;
-(NSString *)serverHostName;
-(ICLibraryAuthServiceClientTokenResult *)tokenResult;
@end

