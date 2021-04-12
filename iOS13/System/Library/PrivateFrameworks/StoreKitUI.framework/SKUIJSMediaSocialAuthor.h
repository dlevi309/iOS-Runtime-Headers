/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSArray *)permissions;
-(NSString *)entityIdentifier;
-(NSString *)entityType;
-(NSDictionary *)storePlatformData;
-(NSString *)dsId;

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
-(NSString *)name;
-(NSArray *)permissions;
-(NSString *)entityIdentifier;
-(NSString *)entityType;
-(id)initWithSKUIMediaSocialAuthor:(id)arg1 ;
-(NSDictionary *)storePlatformData;
-(NSString *)dsId;
@end

