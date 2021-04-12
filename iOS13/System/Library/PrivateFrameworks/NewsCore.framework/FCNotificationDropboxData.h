/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCNotificationDropboxData.h>
@class NSString;


@protocol FCNotificationDropboxData <NSObject,NSMutableCopying>
@property (nonatomic,copy,readonly) NSString * baseURLString; 
@property (nonatomic,copy,readonly) NSString * notificationUserID; 
@property (nonatomic,copy,readonly) NSString * deviceToken; 
@property (nonatomic,copy,readonly) NSString * storefrontID; 
@required
-(NSString *)storefrontID;
-(NSString *)deviceToken;
-(NSString *)notificationUserID;
-(NSString *)baseURLString;

@end


@class NSString, NSDictionary;

@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * baseURLString; 
@property (nonatomic,copy,readonly) NSString * notificationUserID; 
@property (nonatomic,copy,readonly) NSString * deviceToken; 
@property (nonatomic,copy,readonly) NSString * storefrontID; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)storefrontID;
-(NSString *)deviceToken;
-(NSString *)notificationUserID;
-(NSString *)baseURLString;
@end

