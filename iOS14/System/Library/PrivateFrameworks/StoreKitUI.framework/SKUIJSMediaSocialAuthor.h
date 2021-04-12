/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIJSMediaSocialAuthor.h>
@class NSString, NSArray, NSDictionary;


@protocol SKUIJSMediaSocialAuthor <JSExport>
@property (nonatomic,readonly) NSString * dsId; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) NSString * entityType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * permissions; 
@property (nonatomic,readonly) NSDictionary * storePlatformData; 
@required
-(NSString *)entityType;
-(NSString *)dsId;
-(NSString *)name;
-(NSString *)entityIdentifier;
-(NSArray *)permissions;
-(NSDictionary *)storePlatformData;

@end


@class NSString, NSArray, NSDictionary, SKUIMediaSocialAuthor;

@interface SKUIJSMediaSocialAuthor : NSObject <SKUIJSMediaSocialAuthor> {

	SKUIMediaSocialAuthor* _mediaSocialAuthor;

}

@property (nonatomic,readonly) NSString * dsId; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) NSString * entityType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * permissions; 
@property (nonatomic,readonly) NSDictionary * storePlatformData; 
-(NSString *)entityType;
-(NSString *)dsId;
-(NSString *)name;
-(NSString *)entityIdentifier;
-(NSArray *)permissions;
-(id)initWithSKUIMediaSocialAuthor:(id)arg1 ;
-(NSDictionary *)storePlatformData;
@end

