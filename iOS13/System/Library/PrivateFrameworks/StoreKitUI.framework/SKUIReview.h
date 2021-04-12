/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUIReview : NSObject <SKUICacheCoding> {

	NSString* _body;
	NSString* _dateString;
	float _rating;
	NSString* _reviewer;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * body;                                        //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSString * dateString;                                  //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,readonly) float rating;                                           //@synthesize rating=_rating - In the implementation block
@property (nonatomic,readonly) NSString * reviewer;                                    //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(NSString *)title;
-(NSString *)body;
-(NSString *)reviewer;
-(float)rating;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)initWithReviewDictionary:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(NSString *)dateString;
-(id)formattedBylineWithClientContext:(id)arg1 ;
@end

