/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXEmbedResource.h>
@class NSString, NSDate;


@protocol SXEmbedResource <SXResource>
@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@required
-(NSDate *)expirationDate;
-(NSString *)HTML;

@end


@class NSString, NSDate, NSURL;

@interface SXEmbedResource : SXResource <SXEmbedResource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSDate * expirationDate; 
-(NSDate *)expirationDate;
-(NSString *)HTML;
-(id)expirationDateWithValue:(id)arg1 withType:(int)arg2 ;
@end

