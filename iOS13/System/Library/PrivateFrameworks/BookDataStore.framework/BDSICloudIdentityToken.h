/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


#import <BookDataStore/BookDataStore-Structs.h>
@class NSString;

@interface BDSICloudIdentityToken : NSObject {

	NSString* _token;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
+(id)tokenForCurrentIdentityIfCloudKitEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)token;
-(id)initWithToken:(id)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(id)initWithCurrentIdentity;
-(id)initFromArchive:(id)arg1 ;
-(id)_hashFor:(id)arg1 ;
@end

