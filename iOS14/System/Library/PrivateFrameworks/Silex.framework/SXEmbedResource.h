/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXEmbedResource.h>
@class NSString, NSDate;


@protocol SXEmbedResource <SXResource>
@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@required
-(NSString *)HTML;
-(NSDate *)expirationDate;

@end


@class NSString, NSDate, NSURL;

@interface SXEmbedResource : SXResource <SXEmbedResource>

@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)expirationDate;
-(NSString *)HTML;
-(id)expirationDateWithValue:(id)arg1 withType:(int)arg2 ;
@end

