/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTextItem.h>
@class NSString;


@protocol GEOTextItem
@property (nonatomic,readonly) NSString * primaryText; 
@required
-(NSString *)primaryText;

@end


@class NSString;

@interface GEOTextItem : NSObject <GEOTextItem> {

	NSString* _primaryText;

}

@property (nonatomic,readonly) NSString * primaryText;              //@synthesize primaryText=_primaryText - In the implementation block
-(id)init;
-(NSString *)primaryText;
-(id)initWithPrimaryText:(id)arg1 ;
-(id)initWithTextItem:(id)arg1 ;
@end

