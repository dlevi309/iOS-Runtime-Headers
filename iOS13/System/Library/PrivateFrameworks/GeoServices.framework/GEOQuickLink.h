/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDQuickLinkItem, NSString;

@interface GEOQuickLink : NSObject {

	GEOPDQuickLinkItem* _quickLinkItem;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) NSString * appAdamID; 
-(NSString *)title;
-(NSString *)URLString;
-(id)initWithQuickLink:(id)arg1 ;
-(NSString *)appAdamID;
@end

