/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICStorePlatformResponse.h>

@class NSArray, NSNumber, NSDate, NSString;

@interface ICStorePlatformResponseGroup : NSObject <ICStorePlatformResponse> {

	NSArray* _childResponses;

}

@property (nonatomic,copy,readonly) NSArray * allItems; 
@property (nonatomic,copy,readonly) NSNumber * accountIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * enqueuerAccountIdentifier; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
@property (nonatomic,copy,readonly) id rawResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)allItems;
-(NSString *)storefrontIdentifier;
-(NSNumber *)enqueuerAccountIdentifier;
-(NSNumber *)accountIdentifier;
-(NSDate *)expirationDate;
-(id)itemForIdentifier:(id)arg1 ;
-(id)rawResponse;
-(id)initWithResponses:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

