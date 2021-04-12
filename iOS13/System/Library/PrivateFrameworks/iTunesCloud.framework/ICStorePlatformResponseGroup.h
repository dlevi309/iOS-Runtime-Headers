/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICStorePlatformResponse.h>

@class NSArray, NSNumber, NSDate, NSString;

@interface ICStorePlatformResponseGroup : NSObject <ICStorePlatformResponse> {

	NSArray* _childResponses;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * allItems; 
@property (nonatomic,copy,readonly) NSNumber * accountIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * enqueuerAccountIdentifier; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(NSNumber *)accountIdentifier;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)allItems;
-(id)itemForIdentifier:(id)arg1 ;
-(NSString *)storefrontIdentifier;
-(NSNumber *)enqueuerAccountIdentifier;
-(id)initWithResponses:(id)arg1 ;
@end

