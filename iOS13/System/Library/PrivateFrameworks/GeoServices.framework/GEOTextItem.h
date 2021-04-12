/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

