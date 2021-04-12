/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDQuickLinkItem, NSString;

@interface GEOQuickLink : NSObject {

	GEOPDQuickLinkItem* _quickLinkItem;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSString * appAdamID; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) long long type; 
-(NSString *)URLString;
-(NSString *)bundleID;
-(long long)type;
-(id)initWithQuickLink:(id)arg1 ;
-(NSString *)appAdamID;
-(NSString *)title;
@end

