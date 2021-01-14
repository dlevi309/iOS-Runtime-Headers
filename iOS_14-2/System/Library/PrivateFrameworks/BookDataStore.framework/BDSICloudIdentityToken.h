/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/


#import <BookDataStore/BookDataStore-Structs.h>
@class NSString;

@interface BDSICloudIdentityToken : NSObject {

	NSString* _token;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
+(id)tokenForCurrentIdentityIfCloudKitEnabled;
-(id)description;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(id)initWithToken:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCurrentIdentity;
-(id)initFromArchive:(id)arg1 ;
-(id)_hashFor:(id)arg1 ;
@end

