/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSArray, NSNumber, NSDictionary;

@interface EDAMAdParameters : FATObject {

	NSString* _clientLanguage;
	NSArray* _impressions;
	NSNumber* _supportHtml;
	NSDictionary* _clientProperties;

}

@property (nonatomic,retain) NSString * clientLanguage;                    //@synthesize clientLanguage=_clientLanguage - In the implementation block
@property (nonatomic,retain) NSArray * impressions;                        //@synthesize impressions=_impressions - In the implementation block
@property (nonatomic,retain) NSNumber * supportHtml;                       //@synthesize supportHtml=_supportHtml - In the implementation block
@property (nonatomic,retain) NSDictionary * clientProperties;              //@synthesize clientProperties=_clientProperties - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)impressions;
-(void)setImpressions:(NSArray *)arg1 ;
-(NSString *)clientLanguage;
-(void)setClientLanguage:(NSString *)arg1 ;
-(NSNumber *)supportHtml;
-(void)setSupportHtml:(NSNumber *)arg1 ;
-(NSDictionary *)clientProperties;
-(void)setClientProperties:(NSDictionary *)arg1 ;
@end

