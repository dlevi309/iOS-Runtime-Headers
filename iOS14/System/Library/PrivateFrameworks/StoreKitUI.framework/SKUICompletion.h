/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUICompletion : NSObject <SKUICacheCoding> {

	NSString* _alternateTitle;
	NSString* _title;
	NSString* _URLString;

}

@property (nonatomic,readonly) NSString * alternateTitle;                              //@synthesize alternateTitle=_alternateTitle - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * URLString;                                   //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)URLString;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSString *)title;
-(NSString *)alternateTitle;
-(NSMutableDictionary *)cacheRepresentation;
-(id)initWithCompletionDictionary:(id)arg1 ;
@end

